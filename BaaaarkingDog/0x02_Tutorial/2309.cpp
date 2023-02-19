#include <iostream>
#include <algorithm>
using namespace std;


void my_print(int* ar) {
    for(int k = 2; k < 9; k++){
        cout << ar[k] << '\n';
    }
}

int main(){
    int ar[9]; int sum = -100;
    for(int i = 0; i < 9; i++) {
        cin >> ar[i];
        sum += ar[i];
    }
    for(int i = 0; i < 9; i++) {
        for(int j = i+1; j < 9; j++) {
            if(ar[i]+ar[j] == sum) {
                ar[i] = ar[j] = -1;
                sort(ar, ar+9) ;
                my_print(ar);
                return 0;           
            }
        }
    }
    
}