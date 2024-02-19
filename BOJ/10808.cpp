#include <bits/stdc++.h>
using namespace std;

int ar[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int len=str.length();
    for(int i=0; i<len; i++)ar[str[i]-'a']++;
    for(int i=0; i<26; i++) cout << ar[i] << " ";
    cout << '\n';

}