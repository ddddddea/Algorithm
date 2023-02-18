#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    while(N != 0){
        int num = N%10;
        v.push_back(num);
        N /= 10;
    }
    sort(v.begin(), v.end(), greater<int>());
    for(auto i : v) cout << i; 
    cout << '\n';
}