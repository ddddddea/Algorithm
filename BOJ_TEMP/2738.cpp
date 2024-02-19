#include <bits/stdc++.h>
using namespace std;


int r,c;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> r >> c;
    int ar[r*c*2];
    // init
    for(int i=0; i<2*r*c; i++) cin >> ar[i];
    for(int i=0; i <r*c; i++) {
        cout << ar[i] + ar[r*c+i] << " ";
        if((i+1)%c==0) cout << '\n';
    }

}