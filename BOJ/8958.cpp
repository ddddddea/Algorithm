#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; 
    cin >> tc;
    while(tc--){
        string str;
        cin >> str;
        int sum = 0, score = 1;
        int len = str.length();
        for(int i = 0; i < len; i++) {
            if(str[i] == 'O') {
                sum += score;
                score += 1;
            }
            else score = 1;
        }
        cout << sum << '\n';
    }
}