#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ar[5];
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        cin >> ar[i];
        if(ar[i] < 40) ar[i] = 40;
        sum += ar[i];
    }
    cout << sum/5 << '\n';
}