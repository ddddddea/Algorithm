#include <bits/stdc++.h>
using namespace std;


int retNum(vector<int>& v) {
    int ret = 0;
    for(auto i : v) ret += i*i;
    ret %= 10;
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    for(int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        v.push_back(n); 
    }
    cout << retNum(v) << '\n';

}