#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll my_fibo(ll n) {
    if(n <= 1) return n;
    return my_fibo(n-1) + my_fibo(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    cout << my_fibo(n) << '\n';
}