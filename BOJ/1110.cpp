#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cycle = 1;
    cin >> n;
    int tmp = n;
    while(1) {
        if(tmp < 10) tmp = 11*tmp;
        else tmp = 10*(tmp%10) + (tmp/10 + tmp%10)%10;
        if(tmp == n) break;
        cycle++;
    }
    cout << cycle << '\n';
}