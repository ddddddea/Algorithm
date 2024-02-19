#include <bits/stdc++.h>
using namespace std;

int ar[100100];
bool chk[2000010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x, ans=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        ar[i] = tmp;
    }
    cin >> x;
    for(int i=0; i<n; i++){
        if(x-ar[i]>0 && chk[x-ar[i]]) ans++;
        chk[ar[i]] = true;
    }
    cout << ans << '\n';

}