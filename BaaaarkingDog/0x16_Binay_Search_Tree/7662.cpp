#include <bits/stdc++.h>
using namespace std;


int T, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while(T--) {
        cin >> k;
        multiset<int> pq;
        while(k--) {
            int n;
            char ord; 
            cin >> ord;
            if(ord == 'I') {
                cin >> n;
                pq.insert(n);
            }
            else { // ord == 'D'
                cin >> n;
                if(pq.empty()) continue;
                else {
                    if(n == -1) pq.erase(pq.begin());
                    else pq.erase(prev(pq.end()));
                }
            }
        }
        if(pq.empty()) cout << "EMPTY" << '\n';
        else cout << *prev((pq.end())) << " " << *pq.begin() << '\n';
    }
}