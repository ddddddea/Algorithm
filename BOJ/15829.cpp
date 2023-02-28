#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll prime = 1234567891;

ll mul(ll a, ll b) {
    ll res = 1;
    while(b--) {
        res = ((res % prime) * (a% prime))% prime; 
    }
    return res;
}

void my_hash(ll len, string& str) {
    ll ans = 0;
    for(ll i = 0; i < len; i++) {
        ll ch = (int)(str[i] ) - 96;
        ans += ch * mul(31, i);
        ans %= 1234567891;
    }
    cout << ans << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll L; string str;
    cout << mul(31, 50) << '\n';
    cin >> L >> str;
    my_hash(L, str);
}