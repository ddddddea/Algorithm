#include <bits/stdc++.h>
using namespace std;

int N, M;
bool vis[1010];
vector<int> adj[1010];
queue<int> q;
void my_bfs(){
    int ret = 0;
    for(int i = 1; i <= N; i++) {
        if(vis[i]) continue;
        else {
            ret++;
            vis[i] = true;
            q.push(i);
            while(!q.empty()){
                int fr = q.front();
                q.pop();
                for(auto idx : adj[fr]) {
                    if(vis[idx]) continue;
                    vis[idx] = true;
                    q.push(idx);
                }
            }
        }
    }
    cout << ret << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    while(M--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    my_bfs();
}