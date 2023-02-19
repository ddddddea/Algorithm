#include <iostream>
using namespace std;

int main(){
    int n, max = -1, idx;
    for(int i = 1; i <= 9; i++) {
        cin >> n;
        if(n >= max) {max = n; idx = i;}
    }
    cout << max << '\n' << idx << '\n';
}