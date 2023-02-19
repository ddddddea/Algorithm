#include <bits/stdc++.h>
using namespace std;

int ar[1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> ar[i];
    sort(ar, ar+N);
    for(int i = 0; i < N; i++) cout << ar[i] << '\n';
}