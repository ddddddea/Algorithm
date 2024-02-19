#include <bits/stdc++.h>
using namespace std;

int ar[28];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    char ans; int max=0;
    cin >> str;
    int l=str.length();
    for(int i=0; i<l; i++){
        int n = str[i]-'a';
        if(n<0) n+=32;
        ar[n]++; 
    }
    for(int i=0; i<26; i++){
        if(ar[i] > max) {
            max=ar[i];
            ans=i+65;
        }
        else if(ar[i]==max) {
            ans='?';
        }
        else continue;
    }
    cout << ans << '\n';
}