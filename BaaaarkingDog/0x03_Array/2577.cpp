#include <iostream>
using namespace std;

int ar[10];

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    int n = A*B*C;
    while(n!=0){
        ar[n%10]++;
        n /=10;
    }
    for(int i = 0; i < 10; i++) cout << ar[i] << '\n';
}