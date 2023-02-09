#include <iostream>
using namespace std;


void my_print(int n){
    for(int i = 1; i <= 2*n-1; i++){
        if(i < n) {
            // Space
            for(int j = 1; j < i; j++) cout << " ";
            // Star
            for(int j = 1; j <= 2*(n-i)+1; j++) cout << "*";
            cout << '\n';
        }
        else if(i == n){
            for(int j = 1; j < n; j++) cout << " ";
            cout << "*" << '\n';
        }
        else { //i > n
            // Space
            for(int j = 1; j < 2*n-i; j++) cout << " ";
            // Star
            for(int j = 1; j <= 2*(i-n)+1; j++) cout << "*";
            cout << '\n';
        }
    }
}

int main(){
    int N;
    cin >> N;
    my_print(N);
}