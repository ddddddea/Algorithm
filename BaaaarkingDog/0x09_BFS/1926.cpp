#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int n, m, cnt_area, max_area = 0;
int ar[510][510];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
bool vis[510][510];
queue<pair<int, int>> Q;


void my_print(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << ar[i][j] << " ";
        }
        cout << '\n';
    }
}

int bfs(int x, int y){
    int area = 1;
    Q.push({x, y});
    vis[x][y] = true;
    while(!Q.empty()){
        pair<int, int> fr = Q.front();
        Q.pop();
        for(int i = 0; i < 4; i++){
            int x_ = fr.first + dx[i];
            int y_ = fr.second + dy[i];

            if(x_ < 0 || x_ >= n || y_ < 0 || y_ >= m) continue;
            if(vis[x_][y_] == true) continue;
            if(ar[x_][y_] == 0) continue;
            
            area++;
            vis[x_][y_] = true;
            Q.push({x_, y_});
        }
    }
    return area;
}


int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ar[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(ar[i][j] == 1 && vis[i][j] == false){
                cnt_area++;
                int cur_area = bfs(i, j);
                if(max_area < cur_area) max_area = cur_area;
            }
        }
    }
    cout << cnt_area << '\n' << max_area;
}