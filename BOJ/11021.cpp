#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i <<": " << a+b << '\n';
    }
}