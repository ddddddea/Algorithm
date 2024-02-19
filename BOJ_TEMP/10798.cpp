#include <bits/stdc++.h>
using namespace std;

char ca[5][16];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str[5];
    int max = 0;
    for(int i=0; i<5; i++) {
        cin >> str[i];
        if(str[i].length() > max) max = str[i].length();
    }
    for(int i=0; i<5; i++) {
        if(str[i].length() < max){
            int iter=max-str[i].length();
            for(int j=0; j<iter; j++) {
                str[i] += "#";
            }
        }
    }
    for(int i=0; i<max; i++) {
        for(int j=0; j<5; j++) {
            if(str[j][i] == '#') continue;
            cout << str[j][i];
        }
    }
    cout << '\n';
}