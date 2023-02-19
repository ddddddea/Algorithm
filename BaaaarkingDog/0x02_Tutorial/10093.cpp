#include <iostream>
#include <cmath>
#define ll  long long
using namespace std;


void my_print(ll a, ll b) {
    cout << a-b-1 << '\n';
    for(ll i = b+1; i < a; i++) {
        cout << i << ' ';
    }
}


int main() {
    ll a, b;
    cin >> a >> b;
    if(a > b) { // a > b
        my_print(a,b);
    }
    else if(a == b) {
        cout << 0 << '\n';
    }
    else {
        my_print(b,a);
    }
}