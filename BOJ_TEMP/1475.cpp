#include <bits/stdc++.h>
using namespace std;

int ar[10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int len=str.length();
    for(int i=0; i<len; i++) {
        int num=str[i]-'0';
        if(num==6 || num==9) ar[6]++;
        else ar[num]++;
    }
    ar[6] = ar[6]/2 + ar[6]%2;
    int ans=0;
    for(int i=0; i<9; i++) if(ar[i]>ans) ans=ar[i];
    cout << ans << '\n';
}