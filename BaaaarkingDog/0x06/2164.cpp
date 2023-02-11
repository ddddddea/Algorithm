#include <bits/stdc++.h>
using namespace std;

deque<int> dq;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, i = 1;
    cin >> N;
    while(N--)  dq.push_back(i++);
    while(dq.size() != 1) {
        dq.pop_front();
        int fe = dq.front(); 
        dq.pop_front();
        dq.push_back(fe);
    }
    cout << dq.front() << '\n';
}