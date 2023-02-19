#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> m_name, m_number;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        string name;
        cin >> name;    
        string i_str = to_string(i);
        m_name[name] = i_str;
        m_number[i_str] = name;
    }
    
    while(M--) {
        string q;
        cin >> q;
        auto q_name = m_name.find(q);
        auto q_num = m_number.find(q);
        if(q_name != m_name.end()) cout << (*q_name).second << '\n';
        else cout << (*q_num).second << '\n';
    }

}