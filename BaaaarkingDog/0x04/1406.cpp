#include <bits/stdc++.h>
using namespace std;

void my_print(list<char>& l) {
    for(auto s : l) {
        cout << s;
    }
    cout << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    int N;
    cin >> str >> N;
    int len = str.length();
    list<char> l;
    for(int i = 0; i < len; i++) l.push_back(str[i]);
    auto cur = l.end();
    while(N--) {
        char ord;
        cin >> ord;
        if(ord == 'L') {
            if(cur != l.begin()) cur--;
        }
        else if(ord == 'D') {
            if(cur != l.end()) cur++;
        }
        else if(ord == 'B') {
            if(cur != l.begin()) {
                cur--;
                cur = l.erase(cur);
            }
        }
        else { // P
            char ch; 
            cin >> ch;
            if(cur == l.end()) {
                l.push_back(ch);
                cur = l.end();
            }
            else {
                cur = l.insert(cur, ch);
                cur++;
            }
        }
    }
    my_print(l);
}