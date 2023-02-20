#include <bits/stdc++.h>
using namespace std;

int my_fac(int n) {
    if(n <= 0) return 1;
    return n * my_fac(n-1);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    cout << my_fac(N) << '\n';

}