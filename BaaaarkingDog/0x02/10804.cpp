#include <iostream>
using namespace std;

int ar[21];

void my_print(){
    for(int i = 1; i <= 20; i++) cout << ar[i] << " ";
    cout << '\n';
}

void my_swap(int& a, int&b) {
    int temp = a;
    a = b;
    b = temp;
}

void my_reverse_recur(int s, int e) {
    if(s >= e) return;
    my_swap(ar[s], ar[e]);
    my_reverse_recur(s + 1, e - 1);
}

void my_reverse(int s, int e) {
    int m = (e-s)/2;
    for(int i = 0; i <= m; i++){
        my_swap(ar[s + i], ar[e - i]);
    }
}



int main() {
    for(int i = 1; i <= 20; i++) ar[i] = i;
    int s, e;
    for(int i = 0; i < 10; i++) {
        cin >> s >> e;
        my_reverse_recur(s, e);
        
    }
    my_print();
}