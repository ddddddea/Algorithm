#include <iostream>
using namespace std;


int main(){
    int n, t, y = 0, m = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        y += (t/30 + 1) * 10;
        m += (t/60 + 1) * 15;
    }
    if(y == m ) {
        cout << "Y M " << y << '\n';
    }
    else if(y < m) {
        cout << "Y " << y << '\n';
    }
    else {
        cout << "M " << m << '\n';
    }
}