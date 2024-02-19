#include <bits/stdc++.h>
using namespace std;


void run(int a, int b, int n){
    if(n==1){
        cout << a << " " << b << '\n';
        return;
    }
    else {
        run(a, 6-a-b, n-1);
        cout << a << " " << b << '\n';
        run(6-a-b, b, n-1);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << (int)pow(2, n)-1 << '\n';
    run(1, 3, n);
}