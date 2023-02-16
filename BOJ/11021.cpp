#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, T, i = 1;
    cin >> T;
    while(T--) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << '\n';
        i++;
    }
}