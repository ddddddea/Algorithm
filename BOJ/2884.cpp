#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, m;
    cin >> h >> m;
    if(m < 45) {m += 60; h--;}
    if(h < 0) h = 23;
    cout << h << " " << m - 45 << '\n';

}