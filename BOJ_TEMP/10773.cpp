#include <bits/stdc++.h>
using namespace std;

stack<int> st;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    while(k--){
        int n;
        cin >> n;  
        if(n==0) st.pop();
        else st.push(n);
    }
    int sum=0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    cout << sum << '\n';
}