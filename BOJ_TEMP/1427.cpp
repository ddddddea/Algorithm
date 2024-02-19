#include <bits/stdc++.h>
using namespace std;

int ar[10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int len=str.length();
    for(int i=0; i<len; i++) ar[str[i]-'0']++;
    for(int i=9; i>=0; i--){
        for(int j=0; j<ar[i]; j++) cout << i;
    }
}