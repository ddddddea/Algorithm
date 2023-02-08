#include <iostream>
using namespace std;


void upper_star(int n){
    for(int i = 0; i < n; i++){
        //Space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        //Star
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        cout << '\n';
    }
}
void lower_star(int n){
    for(int i = 0; i < n; i++){
        //Space
        for(int j = 0; j <= i; j++){
            cout << " ";
        }
        //Star
        for(int j = 0; j < 2*(n-i)-1; j++){
            cout << "*";
        }
        cout << '\n';
    }
}

int main(){
    int N;
    cin >> N;
    upper_star(N);
    lower_star(N-1);

}