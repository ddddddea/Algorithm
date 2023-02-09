#include <iostream>
#include <tuple>
#include <queue>
#include <cstdio>
using namespace std;



int n,m;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int map[110][110];
bool vis[110][110];
int dist[110][110];
queue<pair<int, int>> q;


int run(){
    int ret;
    vis[0][0] = true;
    dist[0][0] = 1;
    q.push({0,0});
    while(!q.empty()){
        pair<int, int> fr = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            int x_ = fr.first + dx[i];
            int y_ = fr.second + dy[i];

            if(x_ < 0 || x_ >= n || y_ < 0 || y_ >= m) continue;
            if(map[x_][y_] == 0) continue;
            if(vis[x_][y_] == true) continue;

            if(x_ == n-1 && y_ == m-1) {
                ret = dist[fr.first][fr.second]+1;
                return ret;
            }
            dist[x_][y_] = dist[fr.first][fr.second] + 1;
            vis[x_][y_] = true;
            q.push({x_, y_});
        }
        
    }
    return ret;
}


int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%1d", &map[i][j]);
        }
    }
    cout << run() << '\n';
}