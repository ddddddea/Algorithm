#include <bits/stdc++.h>
using namespace std;
queue<int> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    while(N--) {
        string ord;
        cin >> ord;
        if(ord == "push") {
            int n;
            cin >> n;
            q.push(n);
        }
        else if(ord == "pop") {
            if(q.empty()) cout << "-1" << '\n';
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(ord == "size") {
            cout << q.size() << '\n';
        }
        else if(ord == "empty") {
            cout << q.empty() << '\n';
        }
        else if(ord =="front") {
            if(q.empty()) cout << "-1" << '\n';
            else{
                cout << q.front() << '\n';   
            }
        }
        else { // back
            if(q.empty()) cout << "-1" << '\n';
            else{
                cout << q.back() << '\n';
            }
        }
    }
}