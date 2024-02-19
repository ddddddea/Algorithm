#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h,m;
    cin >> h >> m;
    m-=45;
    if(m < 0) {
        m += 60;
        h-=1;
        if(h < 0) cout << h + 24 << " " << m << '\n';
        else cout << h << " " << m << '\n';
    }
    else cout << h << " " << m << '\n';

}