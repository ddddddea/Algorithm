#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

bool vis[1010][1010];
int ar[1010][1010], dist[1010][1010];
int N, M, area, numOfT;
queue<pair<int, int>> q;

void myPrint(){
    cout << "===============================" << '\n';
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++){
            //cout << ar[i][j] << " ";
            cout << dist[i][j] << " ";
        }
        cout << '\n';
    }
    cout << "===============================" << '\n';
}


void run() {
    while(!q.empty()){
        pair p = q.front();
        q.pop();
        vis[p.first][p.second] = true;
        for(int i = 0; i < 4; i++) {
            int x = p.first + dx[i];
            int y = p.second + dy[i];

            if(x < 0 || x >= N || y < 0 || y >= M) continue;
            if(vis[x][y]) continue;
            if(ar[x][y] == 1 || ar[x][y] == -1) continue;

            vis[x][y] = true;
            dist[x][y] = dist[p.first][p.second] + 1;
            ar[x][y] = 1;
            q.push({x, y});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> M >> N;
    area = M*N;
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < M; j++) {
            cin >> ar[i][j];
            if(ar[i][j] == -1) {
                dist[i][j] = 1;
                area--;
            }
            else if(ar[i][j] == 1) {
                dist[i][j] = 1;
                q.push({i, j});
                numOfT++;
            }
            else continue;
        }
    }
    int ans = -1;
    if(area == numOfT) cout << 0 << '\n';
    else {
        run();
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(dist[i][j] == 0) {
                    cout << -1 << '\n';
                    return 0;
                }
                if(ans < dist[i][j]) ans = dist[i][j];
            }
        }
        cout << ans-1 << '\n';
    }
}