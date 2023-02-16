#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int N;
    cin >> N;
    while(N--) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cout << v.front() << " " << v.back() << '\n';
    
}