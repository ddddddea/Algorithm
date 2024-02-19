#include <unordered_map>
#include <vector>
#include <cstdlib>
#include <queue>
using namespace std;
#define MAX_USER 25
#define MAX_REST 10005
  

  
struct User
{
    vector<int> friends;
    int x;
    int y;
  
  
    void init(int x, int y)
    {
        this->x = x;
        this->y = y;
        friends.clear();
    }
};
  
  
struct RestaurantInfo
{
    int x;
    int y;
    bool removed;
  
  
    void init(int x, int y)
    {
        this->x = x;
        this->y = y;
        removed = false;
    }
};
  
  
struct Restaurant
{
    int pID;
    int distance;
    int user_order;
    int total_order;
    int heap_index;
  
  
    void init(int pID, int dist)
    {
        this->pID = pID;
        distance = dist;
        user_order = 0;
        total_order = 0;
    }
};
  
  
struct Heap
{
    int cnt;
    Restaurant *data[MAX_REST];
  
  
    void clear()
    {
        cnt = 0;
    }
  
  
    bool compare(int a, int b)
    {
        int cmp = data[b]->total_order - data[a]->total_order;
        if (cmp == 0)
        {
            cmp = data[a]->distance - data[b]->distance;
        }
        if (cmp == 0)
        {
            cmp = data[a]->pID - data[b]->pID;
        }
        return cmp < 0;
    }
  
  
    void swap(int a, int b)
    {
        data[a]->heap_index = b;
        data[b]->heap_index = a;
        Restaurant *r = data[a];
        data[a] = data[b];
        data[b] = r;
    }
  
  
    int updateUp(int index)
    {
        while (true)
        {
            if (index == 0)
                break;
            int parent = (index - 1) / 2;
            if (compare(parent, index))
            {
                break;
            }
            swap(parent, index);
            index = parent;
        }
        return index;
    }
  
  
    int updateDown(int index)
    {
        while (true)
        {
            int child1 = index * 2 + 1;
            int child2 = index * 2 + 2;
            if (child1 >= cnt)
                break;
            int child = child1;
            if (child2 < cnt)
            {
                child = compare(child1, child2) ? child1 : child2;
            }
            if (compare(index, child))
            {
                break;
            }
            swap(index, child);
            index = child;
        }
        return index;
    }
  
  
    void push(Restaurant *rest)
    {
        data[cnt] = rest;
        rest->heap_index = cnt;
        cnt++;
        updateUp(cnt - 1);
    }
  
  
    Restaurant *pop()
    {
        if (cnt == 0)
            return nullptr;
        Restaurant *ret = data[0];
        swap(0, cnt - 1);
        cnt--;
        updateDown(0);
        return ret;
    }
  
  
    void update(Restaurant *rest)
    {
        int index = updateUp(rest->heap_index);
        updateDown(index);
    }
  
  
    void erase(Restaurant *rest)
    {
        int index = rest->heap_index;
        swap(index, cnt - 1);
        cnt--;
        index = updateUp(index);
        updateDown(index);
    }
};
  
  
int cnt_user;
User users[MAX_USER];
Heap user_heap[MAX_USER];
  
  
int cnt_rest;
RestaurantInfo rest_info[MAX_REST];
  
  
unordered_map<int, int> rest_id_hash;
Restaurant restaurant[MAX_USER][MAX_REST];
  
  
void init(int N, int px[], int py[])
{
    cnt_user = N;
    for (int i = 0; i < N; i++)
    {
        users[i].init(px[i], py[i]);
        user_heap[i].clear();
    }
    cnt_rest = 0;
    rest_id_hash.clear();
}
  
  
void addRestaurant(int pID, int x, int y)
{
    rest_id_hash[pID] = cnt_rest;
    rest_info[cnt_rest].init(x, y);
    for (int i = 0; i < cnt_user; i++)
    {
        int xx = abs(users[i].x - x);
        int yy = abs(users[i].y - y);
        restaurant[i][cnt_rest].init(pID, xx + yy);
        user_heap[i].push(&restaurant[i][cnt_rest]);
    }
    cnt_rest++;
}
  
  
void removeRestaurant(int pID)
{
    int index = rest_id_hash[pID]; // Hash 이용해서 pID 의 레스토랑의 index 를 O(1) 에 찾음
    rest_info[index].removed = true; // Removed 되었다고 표시 (*실제로 Heap 에서 안빼기 때문)
    for (int i = 0; i < cnt_user; i++)
    {
        Restaurant *r = &restaurant[i][index];
        user_heap[i].erase(r);
    }
}
  
  
void order(int uID, int pID)
{
    int index = rest_id_hash[pID];
    restaurant[uID][index].user_order++;
    restaurant[uID][index].total_order++;
    user_heap[uID].update(&restaurant[uID][index]);
    for (int fID : users[uID].friends)
    {
        restaurant[fID][index].total_order++;
        user_heap[fID].update(&restaurant[fID][index]);
    }
}
  
  
void beFriend(int uID1, int uID2)
{
    for (int i = 0; i < cnt_rest; i++)
    {
        if (rest_info[i].removed == true)
            continue;
        if (restaurant[uID2][i].user_order > 0)
        {
            restaurant[uID1][i].total_order += restaurant[uID2][i].user_order;
            user_heap[uID1].update(&restaurant[uID1][i]);
        }
        if (restaurant[uID1][i].user_order > 0)
        {
            restaurant[uID2][i].total_order += restaurant[uID1][i].user_order;
            user_heap[uID2].update(&restaurant[uID2][i]);
        }
    }
    users[uID1].friends.push_back(uID2);
    users[uID2].friends.push_back(uID1);
}
  
  
int recommend(int uID)
{
    int result[10];
    Restaurant *candi[10];
    for (int i = 0; i < 10; i++)
    {
        Restaurant *r = user_heap[uID].pop();
        result[i] = r->pID;
        candi[i] = r;
    }
    for (int i = 0; i < 10; i++)
    {
        user_heap[uID].push(candi[i]);
    }
    return result[9];
}