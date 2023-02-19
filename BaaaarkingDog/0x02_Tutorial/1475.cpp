#include <iostream>
using namespace std;


int ar[10];

int main() {
    int N;
    cin >> N;
    while(N!=0) {
        int a = N%10;
        if(a == 9) ar[6]++;
        else ar[a]++;
        N/=10;
    }
    ar[6] = ar[6]/2 + ar[6]%2;
    int max = -1, idx = -1;
    for(int i = 0; i <= 9; i++) {
        if(max < ar[i]) {
            max = ar[i]; idx = i;
        }
    }
    cout << max << '\n';
}