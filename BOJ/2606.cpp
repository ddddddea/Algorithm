#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
bool vis[105];
vector<int> adj[105];
queue<int> q;

int run(int st){
    int cnt = 0;
    vis[st] = true;
    q.push(st);
    while(!q.empty()){
        int fr = q.front();
        q.pop();
        for(int i = 0; i < adj[fr].size(); i++) {
            int nxt = adj[fr][i];
            if(vis[nxt]) continue;
            vis[nxt] = true;
            q.push(nxt);
            cnt++;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << run(1) << '\n';
}