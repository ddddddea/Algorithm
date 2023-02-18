#include <bits/stdc++.h>
using namespace std;

int ar[10040];

int my_func(int n) {
    int sum = n;
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int max = -1;
    for(int i = 1; i <= 10000; i++) {
        ar[my_func(i)] = 1;
    }
    for(int i = 1; i <= 10000; i++) {
        if(!ar[i]) cout << i << '\n';
    }
}