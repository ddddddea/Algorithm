#include <bits/stdc++.h>
using namespace std;

int ar[42];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 10, cnt = 0;
    while(t--) {
        int n;
        cin >> n;
        ar[n%42]++;
    }
    for(int i = 0; i < 42; i++) if(ar[i] != 0) cnt++;
    cout << cnt << '\n';
}