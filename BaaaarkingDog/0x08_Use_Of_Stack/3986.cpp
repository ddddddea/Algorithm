#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, cnt = 0;
    cin >> N;
    while(N--) {
        string str, str_post;
        cin >> str; // O(N)
        list<char> l;
        for(auto ch : str) l.push_back(ch);
        auto ptr = l.begin();
        while(ptr != l.end()) {
            auto cur = ptr; 
            auto nxt = ++ptr;
            if(*cur == *nxt) {
                cur = l.erase(cur);
                cur = l.erase(cur);
                if(cur != l.begin()) {
                    ptr = --cur;
                }
                else {
                    ptr = l.begin();
                }
            }
        }
        if(l.empty()) cnt++;
    }
    cout << cnt << '\n';
}