#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ar[3];  
    cin >> ar[0] >> ar[1] >> ar[2];
    sort(ar, ar+3);
    for(int i=0; i<3; i++) cout << ar[i] << " ";
    cout << '\n';
}