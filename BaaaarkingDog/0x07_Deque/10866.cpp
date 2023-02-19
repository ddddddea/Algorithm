#include <bits/stdc++.h>
using namespace std;

deque<int> dq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    while(N--){
        string ord;
        cin >> ord;
        if(ord  == "push_front") {
            int n;
            cin >> n;
            dq.push_front(n);
        }
        else if(ord =="push_back") {
            int n;
            cin >> n;
            dq.push_back(n);
        }
        else if(ord == "pop_front"){
            if(dq.empty()) cout << -1 << '\n';
            else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(ord == "pop_back"){
            if(dq.empty()) cout << -1 << '\n';
            else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(ord == "size") {
            cout << dq.size() << '\n';
        }
        else if(ord == "empty") {
            cout << dq.empty() << '\n';
        }
        else if(ord == "front") {
            if(dq.empty()) cout << -1 << '\n';
            else cout << dq.front() << '\n';
        }
        else {
            if(dq.empty()) cout << -1 << '\n';
            else cout << dq.back() << '\n';
        }
    }
}