#include <bits/stdc++.h>
using namespace std;

int ar[10010000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> ar[i];
    sort(ar, ar+n);
    for(int i=0; i<n; i++) cout << ar[i] << '\n';
}