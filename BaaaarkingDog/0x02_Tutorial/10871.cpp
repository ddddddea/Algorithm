#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, x, t;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> t;
        if(t < x) cout << t << " ";
    }
}