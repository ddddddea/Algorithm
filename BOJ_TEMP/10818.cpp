#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int min = 1000100, max = -1000100;
    for(int i = 0; i < N; i++) {
        int n;
        cin >> n;
        if(n < min) min = n;
        if(n > max) max = n;
        
    }
    cout << min << " " << max << '\n';
}