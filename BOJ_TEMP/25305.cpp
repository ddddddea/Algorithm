#include <bits/stdc++.h>
using namespace std;

int ar[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> ar[i];
    sort(ar, ar+n+1);
    cout << ar[n-k+1] << '\n';


}