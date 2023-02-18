#include <bits/stdc++.h>
using namespace std;


// a1 + a3 = a2/2 임으로도 풀이 가능
bool myfunc(int n){
    if(n < 100) return true;
    vector<int> v;
    while(n != 0){
        int a = n%10;
        v.push_back(a);
        n /= 10;
    }
    int ad = v[0] - v[1];
    for(int i = 1; i+2 <= (int)v.size(); i++) {
        if(v[i]-v[i+1] != ad) return false;
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, ans = 0;

    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(myfunc(i)) ans++;
    }
    cout << ans << '\n';
}