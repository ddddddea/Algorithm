#include <bits/stdc++.h>
using namespace std;

int N, K, cnt = 0, step = 1;
list<int> l;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> K;
    for(int i = 1; i <= N; i++) l.push_back(i);
    auto ptr = l.begin();
    auto e = l.end();
    cout << "<";
    while(cnt != N) {
        if(step == K) {
            cnt+=1;
            if(cnt == N) cout << *ptr << ">";
            else cout << *ptr << ", ";
            step = 1;
            ptr = l.erase(ptr);
        }
        else {
            step++;
            ptr++;
        }
        if(ptr == l.end()) ptr = l.begin();
    }
}