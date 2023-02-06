#include <iostream>
#include <cmath>
using namespace std;


int main() {
    long long int s, r = 0, i = 1;
    cin >> s;

    // Answer-1)
    /* 
    n^2 + n - 2s = 0
    n = (-1 + sqrt(1+8s))/2
    */

   i = 0.5 * (-1 + sqrt(1+8*s));
   cout << i << '\n';
    
    // Answer-2)
    // for(i = 1; i*(i+1) <= 2*s; i++) {
        
    // }
    // cout << i-1 << '\n';
}