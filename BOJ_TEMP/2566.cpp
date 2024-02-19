#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int max = -1, r, c;
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= 9; j++) {
            int n;
            cin >> n;
            if(n > max) {
                max = n;
                r = i; c = j;
            }
        }    
    }
    cout << max << '\n' << r << " " << c << '\n';

}