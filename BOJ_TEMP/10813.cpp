#include <bits/stdc++.h>
using namespace std;

int ar[110];

void run(int s, int e) {
    int tmp = ar[s];
    ar[s] = ar[e];
    ar[e] = tmp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    // init
    for(int i = 1; i <= n; i++) ar[i] = i;
    while(m--) {
        int s, e;
        cin >> s >> e;
        run(s, e);
    }
    for(int i = 1; i <= n; i++) cout << ar[i] << " ";
    cout << '\n';

}