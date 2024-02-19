#include <bits/stdc++.h>
using namespace std;

int ar[110];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, ans=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> ar[i];
    for(int i=1; i<=n-2; i++) {
        for(int j=i+1; j<=n-1; j++) {
            for(int k=j+1; k<=n; k++) {
                int sum = ar[i]+ar[j]+ar[k];
                if(sum>=ans && sum<=m) ans=sum;
            }
        }
    }
    cout << ans << '\n';
}
