#include <iostream>
using namespace std;

int main(){
    int min=100, n, sum=0;
    for(int i = 0; i < 7; i++) {
        cin >> n;
        if(n%2 == 1) {
            sum+=n;
            if(min > n) min = n;
        }
    }
    if(sum==0) cout << -1 << '\n';
    else cout << sum << '\n' << min << '\n';
}