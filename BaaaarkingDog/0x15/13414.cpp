#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> um;
list<string> std_l;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int K, L;
    cin >> K >> L;
    for(int i = 0; i < L; i++) {
        string std_id;
        cin >> std_id;
        std_l.push_back(std_id); // Add std_list
        if(um.find(std_id) == um.end()) um[std_id] = 1; // Student who first Click
        else {  
            um[std_id] += 1;
        }
    }

    for(auto i = std_l.begin(); i != std_l.end();) {
        if(um[(*i)] > 1) {
            um[(*i)]--;
            i = std_l.erase(i);
        }
        else i++;
    }
    
    int cnt = 0;
    for(auto i = std_l.begin(); i != std_l.end(); i++) {
        cout << (*i) << '\n';
        cnt++;
        if(K == cnt) break;
    }
}