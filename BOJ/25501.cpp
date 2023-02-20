#include <bits/stdc++.h>
using namespace std;
int num;

int recursion(const char *s, int l, int r){
    num++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string str;
        cin >> str;
        cout << isPalindrome(str.c_str()) << " " << num << '\n';
        num = 0;
    }

}