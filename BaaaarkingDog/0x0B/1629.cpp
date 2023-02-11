#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a, b, c;

ll my_mul(ll x, ll y) {
    if(y == 1) return x % c;

    else if(y % 2 == 0) return (my_mul(x, y/2) % c) * (my_mul(x, y/2) % c) % c;
    else return (my_mul(x, (y+1)/2) % c) * (my_mul(x, y/2)  % c) % c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    cout << my_mul(a, b);

}