#include <bits/stdc++.h>
using namespace std;

int N, K;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multiset<pair<int, int>> ms;
    cin >> N >> K;
    while(N--){
        int M,V;
        cin >> M >> V;
        ms.insert({M, V});   
    }
    for(auto i : ms) cout << i.first << " " << i.second  << '\n';

}