#include <bits/stdc++.h>
using namespace std;

int N, K;
bool vis[100010];
int dist[100010];
queue<int> q;
int mv(int x, int mode) {
    if(mode == 0) return -1;
    else if(mode == 1) return 1;
    else return x;
}
void bfs(int cur) {
    if(cur == K) {cout << 0; return;}
    vis[cur] = true;
    q.push(cur);
    while(!q.empty()) {
        int fr = q.front();
        q.pop();
        for(int i = 0; i < 3; i++) {
            int nxt = fr + mv(fr, i);
            if(nxt < 0 || nxt > 100000) continue;
            if(vis[nxt]) continue;
            if(nxt == K) {
                cout << dist[fr] + 1;
                return;
            }
            vis[nxt] = true;
            dist[nxt] = dist[fr] + 1;
            q.push(nxt);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> K;
    bfs(N);

}