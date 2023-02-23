#include <bits/stdc++.h>
using namespace std;

void run(int n) {
    vector<int> v;
    for(int i = 2; i*i <= n; i++) {
        while(n % i == 0) {
            v.push_back(i);
            n /= i;
        }
    }
    for(auto i : v) cout << i << '\n';
    if(n != 1) cout << n << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    run(N);

}