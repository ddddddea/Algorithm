#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ar[100010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, num = 1, max_num = 0;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> ar[i];
    sort(ar, ar + N);
    ll val = ((ll)1<<62) + 1;
    if(N == 1 || N == 2) cout << ar[0] << '\n';
    else {
        for(int i = 0; i < N; i++) {
            pair p = equal_range(ar, ar+N, ar[i]);
            int cnt = p.second - p.first;
            if(cnt == max_num) {
                if(ar[i] < val) val = ar[i];
            }
            else if(cnt > max_num) {
                max_num = cnt;
                val = ar[i];
            }
        }
        cout << val << '\n';
    }
}