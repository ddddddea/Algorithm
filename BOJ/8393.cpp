#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) sum += i;
    cout << sum << '\n';

}   