#include <bits/stdc++.h>
using namespace std;

int ar[110];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, ans = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++) cin >> ar[i];
    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            for(int k = j+1; k < N; k++) {
                int val = ar[i] + ar[j] + ar[k];
                //cout << "val: " << val << '\n';
                if(val == M) {cout << M << '\n'; return 0;}
                else {
                    if(M - val >= 0 && M - val < M - ans) {
                        ans = val;
                    }
                }
            }
        }
    }
    cout << ans << '\n';
}