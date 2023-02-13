#include <bits/stdc++.h>
using namespace std;

int N, M;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int ar[52][52];
bool vis[52][52];
queue<pair<int, int>> q;


void my_clear() {
    for(int i = 0; i < 51; i++) {
        for(int j = 0; j < 51; j++) {
            ar[i][j] = 0;
            vis[i][j] = 0;
        }
    }
}

int my_bfs(int r, int c) {
    vis[r][c] = true;
    q.push({r, c});
    while(!q.empty()) {
        pair front = q.front(); 
        q.pop();
        for(int i = 0; i < 4; i ++) {
            int xs = front.first + dx[i];
            int ys = front.second + dy[i];

            if(xs < 0 || xs > N || ys < 0 || ys > M) continue;
            if(ar[xs][ys] == 0) continue;
            if(vis[xs][ys]) continue;

            vis[xs][ys] = true;
            q.push({xs, ys});
        }
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, K, r, c;
    cin >> T;
    while(T--) {
        my_clear();
        cin >> M >> N >> K;
        while(K--) {
            cin >> c >> r;
            ar[r][c] = 1; 
        }
        int result = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(vis[i][j] == false && ar[i][j] == 1) {
                    result += my_bfs(i, j);
                }
            }
        }
        cout << result << '\n';
    }

}