#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(1){
        string str;
        getline(cin ,str);
        if(str == ".") break; 
        bool flag = true;
        stack<char> s; 
        int len = str.length();
        for(int i = 0; i < len; i++) {
            char ch = str[i];
            if(ch == '(') {s.push(ch);}
            else if(ch == ')') {
                if(s.empty() || s.top() != '(') {
                    flag = false;
                    break;
                }
                s.pop();
            }
            else if(ch == '[') {s.push(ch);}
            else if(ch == ']') {
                if(s.empty() || s.top() != '[') {
                    flag = false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty()) flag = false;
        if(flag) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}