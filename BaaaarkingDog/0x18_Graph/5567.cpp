#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
queue<int> q;
vector<int> adj[502];
bool vis[502];
int dep[502];


void bfs(int cur) {
    vis[cur] = true;
    q.push(cur);
    while(!q.empty()) {
        int fr = q.front(); 
        q.pop();
        for(auto i : adj[fr]) {
            if(vis[i]) continue;
            vis[i] = true;
            dep[i] = dep[fr] + 1;
            q.push(i);
        }
    }
    for(int i = 1; i <= n; i++) {
        if(dep[i] > 0 && dep[i] <= 2) ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    while(m--){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
}