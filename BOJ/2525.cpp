#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, m, t;
    cin >> h >> m >> t;
    int h_t = t / 60;
    int m_t = t % 60;

    if(m + m_t >= 60) { m -= 60; h += 1;}
    if(h + h_t >= 24) { h -= 24;}

    cout << h + h_t << " " << m + m_t << '\n';
}