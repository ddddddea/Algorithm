#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int map[30][30];
int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
int N;
bool vis[30][30];
queue<pair<int, int>> q;
vector<int> v;

int my_bfs(int x, int y){
   int area = 1;
    vis[x][y] = true;
    q.push({x, y});
    while(!q.empty()){
        pair fr = q.front(); q.pop();
        for(int i = 0; i < 4; i++) {
            int xs = fr.first + dx[i];
            int ys = fr.second + dy[i];

            if(xs < 0 || xs >= N || ys < 0 || ys >= N) continue;
            if(map[xs][ys] == 0) continue;
            if(vis[xs][ys]) continue;

            vis[xs][ys] = true;
            area++;
            q.push({xs, ys});
        }
    }
    return area;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%1d", &map[i][j]);
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(map[i][j] != 0 && !vis[i][j]) {
                int area = my_bfs(i, j);
                v.push_back(area);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }
}