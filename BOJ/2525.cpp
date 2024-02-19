#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, m, t;
    cin >> h >> m >> t;
    m += t;
    while(m >= 60) {
        h+=1;
        m-=60;
    }
    while(h >= 24) {
        h -=24;
    }
    cout << h << " " << m << '\n';
}