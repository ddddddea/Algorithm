#include <bits/stdc++.h>
using namespace std;

int ar[32];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1; i<=28; i++) {
        int idx; 
        cin >> idx;
        ar[idx]++;
    }
    for(int i=1; i<=30; i++) {
        if(ar[i]==0) cout << i << '\n';
    }

}