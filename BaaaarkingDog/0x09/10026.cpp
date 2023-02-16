#include <bits/stdc++.h>
using namespace std;

int N;
int ans, ans2;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
char ar[110][110];
bool vis[110][110];
queue<pair<int, int>> q;

int bfs(int i, int j, char ch) {
    int ret = 1;
    vis[i][j] = true;
    q.push({i, j});
    while(!q.empty()) {
        pair fr = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            int x = fr.first + dx[i];
            int y = fr.second + dy[i];

            if(x < 1 || x > N || y < 1 || y > N) continue;
            if(vis[x][y]) continue;
            if(ar[x][y] != ch) continue;
            
            vis[x][y] = true;
            q.push({x, y});
        }
    }
    return ret;
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            scanf("%1s", &ar[i][j]);
        }
    }    
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(vis[i][j] == false) {
                ans += bfs(i, j, ar[i][j]);
            }
        }
    }
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            vis[i][j] = false;
            if(ar[i][j] == 'G') ar[i][j] = 'R';
        }
    }
     for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(vis[i][j] == false) {
                ans2 += bfs(i, j, ar[i][j]);
            }
        }
    }

    cout << ans << " " << ans2 << '\n';
}