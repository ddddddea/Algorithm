#include <bits/stdc++.h>
using namespace std;

int ar[110];

void run(int s, int e, int v) {
    for(int i = s; i <= e; i++) ar[i] = v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    while(m--) {
        int s,e,k;
        cin >> s >> e >> k;
        run(s, e, k);
    }
    for(int i = 1; i <= n; i++) cout << ar[i] << " ";
    cout << '\n';
}