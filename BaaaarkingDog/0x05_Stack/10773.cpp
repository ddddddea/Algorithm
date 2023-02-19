#include <bits/stdc++.h>
using namespace std;

stack<int> st;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int k, ans = 0;
    cin >> k;
    while(k--){
        int n;
        cin >> n;
        if(n == 0) st.pop();
        else st.push(n);
    }
    int st_size = st.size();
    for(int i = 0; i < st_size; i++) {
        ans += st.top();
        st.pop();
    }
    cout << ans << '\n';
}