#include <bits/stdc++.h>
using namespace std;

string str_ar[8] = {"c=", "c-", "d-", "lj", "nj", "s=", "z=", "dz="};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans = 0;
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i <= len - 2; i++) {
        if(str[i] == '-') continue;
        if(i == len - 2) {
            string sub_a = str.substr(i, 2);
            for(int j = 0; j < 7; j++) {
                if(sub_a == str_ar[j]) {
                    str[i] = str[i+1] = '-';
                    break;
                }
            }
        }
        else {  
            string sub_a = str.substr(i, 2);
            string sub_b = str.substr(i, 3);
            for(int j = 0; j < 8; j++) {
                if(sub_a == str_ar[j]) {
                    str[i] = str[i+1] = '-';
                    break;
                }
                else if(sub_b == str_ar[j]) {
                    str[i] = str[i+1] = str[i+2] = '-';
                    break;
                }
                else continue;
            }
        }
        ans++;
    }
    if(str[len-1] != '-') ans++;
    cout << ans << '\n';
}