#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int len = str.length();
    int ans = 0;
    for(int i=0; i<len; i++){
        int n = str[i]-'A';
        if(n<18)  ans+=(n/3)+3;
        else if (n==18) ans+=8;
        else if(n<=21) ans+=9;
        else ans+=10;
    }
    cout << ans << '\n';
}