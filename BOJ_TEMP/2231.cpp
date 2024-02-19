#include <bits/stdc++.h>
using namespace std;

int go(int a) {
    int ret = a;
    while(a>0) {
        ret += a%10;
        a/=10;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ret=0;
    cin >> n;
    for(int i=1; i<n; i++) {
        if(n == go(i)) {
            ret = i;
            break;
        }
    }
    cout << ret << '\n';
}