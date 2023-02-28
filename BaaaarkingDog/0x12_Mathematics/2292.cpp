#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int i = 1;
    while(1) {
        int val = 3*i*i - 3*i + 1;
        if(val >= N) break;
        i++;
    }
    cout << i << '\n';
}