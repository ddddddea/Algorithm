#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n <= 1) return 1;
    else return n * factorial(n-1);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;
    cout << factorial(N) / (factorial(K) * factorial(N-K)) << '\n';

}