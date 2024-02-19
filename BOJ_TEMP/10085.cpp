#include <bits/stdc++.h>
using namespace std;

int ar[4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    ar[0] = x;
    ar[1] = y;
    ar[2] = w-x;
    ar[3] = h-y;
    sort(ar, ar+4);
    cout << ar[0] << '\n';

}