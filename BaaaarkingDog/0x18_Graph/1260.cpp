#include <bits/stdc++.h>
using namespace std;

int N, M, V;
bool vis[1010];
vector<int> adj[1010];
queue<int> q;

void bfs(int cur){
    vis[cur] = true;
    q.push(cur);
    while(!q.empty()) {
        int fr = q.front();
        cout << fr << " ";
        q.pop();
        for(auto i : adj[fr]) {
            if(vis[i]) continue;
            vis[i] = true;
            q.push(i);
        }
    }
}
void dfs(int cur) {
    cout << cur << " ";
    vis[cur] = true;
    for(auto i : adj[cur]) {
        if(vis[i]) continue;
        dfs(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M >> V;
    while(M--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); 
        adj[v].push_back(u);
    }
    for(int i = 1; i <= N; i++) sort(adj[i].begin(), adj[i].end());
    dfs(V);
    cout << '\n';
    for(int i = 1; i <= N; i++) vis[i] = false;
    bfs(V);
}