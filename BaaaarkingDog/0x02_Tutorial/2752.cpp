#include <iostream>
using namespace std;


void my_swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void my_swap2(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int ar[3];
    cin >> ar[0] >> ar[1] >> ar[2];

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j <3; j++) {
            if(ar[i] > ar[j]) {
                my_swap2(ar[i], ar[j]);
            }            
        }
    }
    cout << ar[0] << " " << ar[1] << " " << ar[2] << '\n';
}