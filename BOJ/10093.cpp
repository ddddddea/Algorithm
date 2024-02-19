#include <bits/stdc++.h>
using namespace std;
#define lli long long int 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli a,b,c;
    cin >> a >> b;
    if(a==b) {
        cout << "0" << '\n';
        return 0;
    }
    else if(b<a) {
        lli tmp=a;
        a = b;
        b = tmp;
    }
    cout << b-a-1 << '\n';
    for(lli i=a+1; i<b; i++) {
        cout << i << " ";
    }
    cout << '\n';
    
}