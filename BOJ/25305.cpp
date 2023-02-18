#include <bits/stdc++.h>
using namespace std;

int ar[1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, k;
    cin >> N >> k;
    for(int i = 1; i <= N; i++) {
        cin >> ar[i];
        ar[i] *= -1;
    }
    sort(ar+1, ar+1+N);
    cout << -ar[k] << '\n';
}