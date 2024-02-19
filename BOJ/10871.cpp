#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, X, sum=0;
    cin >> N >> X;
    for(int i = 0; i < N; i++) {
        int n;
        cin >> n;
        if(n < X) cout << n << " ";
    }
    cout << '\n';
}