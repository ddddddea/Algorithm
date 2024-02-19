#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ret=-1;
    if(n%5==0) cout << n/5 << '\n';
    else {
        for(int i=n/5; i>=0; i--) {
            int tmp=n-5*i;
            if(tmp%3==0) {
                ret=i+tmp/3;
                break;
            }
        }
        cout << ret << '\n';
    }
}