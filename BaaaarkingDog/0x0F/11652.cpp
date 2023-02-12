#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ar[100010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, s = 0, e = 0, cnt = 0, max_cnt = 0;
    ll value = ((ll)1<<62) + 1;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> ar[i];
    for(int i = 0; i < N; i++) {
        if(ar[s] == ar[e]) {
            cnt++;
            e++;
            if(cnt > max_cnt) {
                value = ar[s];
                max_cnt = cnt;
            }
            else if(cnt == max_cnt) {
                if(value > ar[s]) value = ar[s];    
            }
        }
        else {
            cnt = 0;
            i = s = e;
        }
    }
    cout << value << '\n';
}