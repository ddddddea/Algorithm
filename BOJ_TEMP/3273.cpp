#include <bits/stdc++.h>
using namespace std;

int ar[100010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, ans=0;
    cin >> n;
    for(int i=0; i<n; i++)  cin >> ar[i];
    sort(ar, ar+n);
    cin >> x;
    int s=0, e=n-1;
    while(s<e) {
        int sum=ar[s]+ar[e];
        if(sum==x) {ans++; s++; e--;}
        else if(sum<x) s++;
        else e--;
    }
    cout << ans << '\n';
}