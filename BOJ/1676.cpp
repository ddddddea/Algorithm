#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt_two = 0, cnt_five = 0, ans;
    cin >> n;
    for(int i = 1; i <= n ; i++) {
        int tmp = i;
        while(tmp%2 == 0){
            cnt_two++;
            tmp /= 2;
        }
        tmp = i;
        while(tmp%5 == 0) {
            cnt_five++;
            tmp /= 5;
        }
    }
    (cnt_two > cnt_five) ? (ans = cnt_five) : (ans = cnt_two);
    cout << ans << '\n';
}