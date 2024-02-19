#include <bits/stdc++.h>
using namespace std;

int ar[10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    string str;
    cin >> a >> b >> c;
    int mul=a*b*c;
    str = to_string(mul);
    int len=str.length();
    for(int i=0; i<len; i++) ar[str[i]-'0']++;
    for(int i=0; i<10; i++) cout << ar[i] << '\n';
}