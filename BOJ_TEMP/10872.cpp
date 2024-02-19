#include <bits/stdc++.h>
using namespace std;

int my_factorial(int n){
    if(n<=0) return 1;
    else return my_factorial(n-1) * n;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << my_factorial(n) << '\n';

}