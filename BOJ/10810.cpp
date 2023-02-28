#include <bits/stdc++.h>
using namespace std;

int ar[105];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    while(m--) {
        int s, e, v;
        cin >> s >> e >> v;
        for(int i = s; i <= e; i++) {
            ar[i] = v;
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << ar[i] << " ";
    }
}