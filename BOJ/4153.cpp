#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(1){
        int ar[3];
        cin >> ar[0] >> ar[1] >> ar[2];
        if(ar[0] + ar[1] + ar[2] == 0) break;
        sort(ar, ar+3);
        int val = ar[0] * ar[0] + ar[1] * ar[1];
        if(val == ar[2] * ar[2]) cout << "right" << '\n';
        else cout << "wrong" << '\n';
    }
}