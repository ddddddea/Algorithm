#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b ==c) cout << 10000 + a*1000 << '\n';
    else if (a!=b && b!=c && c!=a) {
        int max_ = a;
        if (max_ < b) max_= b;
        if(max_ < c) max_ = c; 
        cout << 100 * max_ << '\n';
    }
    else {
        if(a==b) cout << 1000 + a*100 << '\n';
        else cout << 1000 + c*100 << '\n';
    }
}