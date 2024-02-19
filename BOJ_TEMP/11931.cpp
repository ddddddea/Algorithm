#include <bits/stdc++.h>
using namespace std;

int ar[1000010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> ar[i];
    sort(ar, ar+n);
    for(int i=n-1; i>-1; i--) cout << ar[i] << '\n';
}