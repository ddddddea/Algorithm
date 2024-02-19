#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    queue<int> q;
    cin >> n;
    while(n--){
        string ord;
        cin >> ord;
        if(ord=="push") {
            int num;
            cin >> num;
            q.push(num);
        }
        else if(ord=="pop"){
            if(q.empty()) cout << -1 << '\n';
            else {
                int fr=q.front();
                cout << fr << '\n';
                q.pop();
            }
        }
        else if(ord=="empty") {
            if(q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(ord=="size"){
            cout << q.size() << '\n';
        }
        else if(ord=="front"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else{
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }
}