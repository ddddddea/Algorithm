#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int sum = 0; int ar[5];
    for(int i = 0; i < 5; i++) {
        cin >> ar[i];
        sum += ar[i];
    }
    sort(ar, ar+5);
    cout << sum/5 << '\n' << ar[2] << '\n';
}