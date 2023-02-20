#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    while(N--) {
        int ord;
        cin >> ord;
        if(ord == 0) {
            if(pq.empty()) cout << 0 << '\n';
            else {cout << pq.top() << '\n'; pq.pop();}
        }
        else {
            pq.push(ord);
        }
    }
}