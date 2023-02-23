#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n==1) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, ans = 0;
    cin >> N;
    while(N--) {
        int num;
        cin >> num;
        if(isPrime(num)) ans++;
    }
    cout  << ans << '\n';
}