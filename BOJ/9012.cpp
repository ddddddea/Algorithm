#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        string str;
        stack<int> st;
        bool flag=true;
        cin >> str;
        int l=str.length();
        for(int i=0; i<l; i++){
            char c=str[i];
            if(c=='(') st.push(0);
            else {
                if(st.empty()) {
                    flag=false;
                    break;
                }
                else st.pop();
            }
        }
        if(st.empty() && flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

}