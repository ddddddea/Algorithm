#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int ar[110][110];
int N, M;
list<pair<int, int>> l;

void run() {
    vector<pair<int, int>> v;
    for(auto cur = l.begin(); cur != l.end(); ) {
        int cnt = 0;
        pair p  = *cur;
        for(int i = 0; i < 4; i++) {
            int x = p.first + dx[i];
            int y = p.second + dy[i];

            if(ar[x][y] == 1) continue;
            cnt++;
        }
        if(cnt >= 2) {
            cur = l.erase(cur);
            v.push_back(p);
        }
        else cur++;
    }
    for(auto i : v) ar[i.first][i.second] = 0;
}

void my_print() {
    cout << "=========================" << '\n';
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << ar[i][j] << " ";
        }
        cout << '\n';
    }
    cout << "=========================" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> ar[i][j];
            if(ar[i][j] == 1) l.push_back({i, j});
        }
    }
    int t = 0;
    while(!l.empty()) {
        t++;
        run();
    }
    cout << t << '\n';
}