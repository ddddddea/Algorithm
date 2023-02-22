#include <bits/stdc++.h>
using namespace std;

class cmp{
public:
    bool operator()(int a, int b) {
        if(abs(a) != abs(b)) return abs(a) > abs(b);
        return a > 0 && b < 0;
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<int, vector<int>, cmp> pq;
    int N;
    cin >> N;
    while(N--) {
        int ord;
        cin >> ord;
        if(ord != 0) {
            pq.push(ord);
        }
        else{
            if(pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
}
