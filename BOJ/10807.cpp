#include <bits/stdc++.h>
using namespace std;

int ar[205];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, v;
    cin >> N;
    for(int i=0; i < N; i++) {
        int n;
        cin >> n;
        ar[n+100]++;
    }
    cin >> v;
    cout << ar[v+100] << '\n';

}