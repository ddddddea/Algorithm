#include <bits/stdc++.h>
using namespace std;

int ar[2250010];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 1; i <= N*N; i++) cin >> ar[i];
    sort(ar+1, ar + N*N + 1, greater<int>());
    cout << ar[N] << '\n';
}