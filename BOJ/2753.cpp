#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    if ((a%400 == 0) ||(a%4==0 && a%100 != 0)) cout << "1" << '\n'; 
    else cout << "0" << '\n';

}