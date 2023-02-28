#include <bits/stdc++.h>
using namespace std;

void run(int n) {
    for(int i = 1; i <= n; i++) {
        int sum = i;
        int tmp = i;
        while(tmp != 0) {
            sum += (tmp % 10);
            tmp /= 10;
        }
        if(sum == n) {
            cout << i << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int N;
    cin >> N;
    run(N);
}