#include <iostream>
using namespace std;

int ar[210];


int main(){
    int N, v, tmp;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        ar[tmp + 100]++;
    }
    cin >> v;
    cout << ar[v+100] << '\n';
}