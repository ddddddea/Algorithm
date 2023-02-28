#include <bits/stdc++.h>
using namespace std;

int ar[100010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        int n;
        cin >> n;
        ar[i] = ar[i-1] + n;
    }
    for(int i = 0; i < M; i++) {
        int s, e;
        cin >> s >> e;
        cout << ar[e] - ar[s-1] << '\n';
    }
}