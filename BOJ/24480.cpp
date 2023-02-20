#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100010];
int seq[100010];
bool vis[100010];
int idx = 1;

void dfs(int cur) {
    vis[cur] = true;
    seq[cur] = idx++;
    for(auto nxt : adj[cur]) {
        if(vis[nxt]) continue;
        dfs(nxt);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, R;
    cin >> N >> M >> R;
    while(M--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= N; i++) sort(adj[i].begin(), adj[i].end(), greater<int>());
    dfs(R);
    for(int i = 1; i <= N; i++) cout << seq[i] << '\n';
}