#include <bits/stdc++.h>
using namespace std;

int ar[10010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        ar[tmp]++;
    }
    for(int i=1; i<=10000; i++) {
        for(int j=0; j<ar[i]; j++) {
            cout << i << '\n';
        }
    }
}