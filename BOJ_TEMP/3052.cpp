#include <bits/stdc++.h>
using namespace std;

int ar[42];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<10; i++) {
        int n;
        cin >> n;
        ar[n%42]++;
    }
    int ans=0;
    for(int i=0; i<=41; i++) {
        if(ar[i]!=0) ans++;
    }
    cout << ans << '\n';
}