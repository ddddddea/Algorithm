#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    bool flag = false;
    for(int i = 2; i >= 0; i--){
        if(a[i] > b[i]) {flag = true; break;}
        else if(a[i] < b[i]) break;
        else continue;
    }
    if(!flag) for(auto i = b.rbegin(); i != b.rend(); i++) cout << *i;
    else for(auto i = a.rbegin(); i != a.rend(); i++) cout << *i;
}