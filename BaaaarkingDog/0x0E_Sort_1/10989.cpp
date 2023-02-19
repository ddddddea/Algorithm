#include <bits/stdc++.h>
using namespace std;

int ar[10010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        ar[tmp]++;
    }
    for(int i = 1; i <= 10000; i++) {
        for(int j = 0; j < ar[i]; j++) cout << i << '\n';
    }
}