#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans = 0;
    int ar[55], br[55];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> ar[i];
    for(int i = 0; i < n; i++) cin >> br[i];
    sort(ar, ar+n);
    sort(br, br+n, greater<int>());
    for(int i = 0; i < n; i++) ans += ar[i]*br[i];
    cout << ans << '\n';
}