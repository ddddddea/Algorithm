#include <bits/stdc++.h>
using namespace std;

bool vis[100010];
vector<int> adj[100010];
int seq[100010];
queue<int> q;

void bfs(int cur) {
    int idx = 1;
    vis[cur] = true;
    q.push(cur);
    while(!q.empty()){
        int fr = q.front();
        seq[fr] = idx++;  
        q.pop();
        for(auto nxt : adj[fr]) {
            if(vis[nxt]) continue;
            vis[nxt] = true;
            q.push(nxt);
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, R;
    cin >> N >> M >> R;
    while(M--){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= N; i++) sort(adj[i].begin(), adj[i].end());
    bfs(R);
    for(int i = 1; i <= N; i++) cout << seq[i] << '\n';
}