#include <bits/stdc++.h>
using namespace std;

int ar[100010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> ar[i];
    sort(ar, ar + N);
    int s = 1, e = N, sum, ans = 1e9 + 1e9 + 1;
    while(s < e) {
        sum = ar[s] + ar[e];
        if(abs(sum) < abs(ans)) ans = sum;
        if(sum == 0) {
            cout << 0 << '\n';
            return 0;
        }
        else if(sum > 0) {
            e--;
        }
        else {
            s++;
        }
    }
    cout << ans << '\n';
}