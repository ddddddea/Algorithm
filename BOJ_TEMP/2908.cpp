#include <bits/stdc++.h>
using namespace std;

int my_reverse(string& str){
    reverse(str.begin(), str.end());
    return atoi(str.c_str());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    my_reverse(a);
    my_reverse(b);
    if(a>=b) cout << a << '\n';
    else cout << b << '\n';

}