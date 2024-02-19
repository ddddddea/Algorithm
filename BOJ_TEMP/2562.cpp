#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int max = -1, idx = -1;
    for(int i = 1; i <= 9; i++) {
        int t;
        cin >> t;
        if(t > max) {
            max = t; idx = i;
        }
    }
    cout << max << '\n' << idx << '\n';

}