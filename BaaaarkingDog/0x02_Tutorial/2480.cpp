#include <iostream>
using namespace std;


int main(){
    int ar[7] = {0,0,0,0,0,0,0};
    for(int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        ar[n]++;
    }
    
    int max = 0;
    for(int i = 1; i <= 6; i++) {
        if(ar[i] == 3) {
            cout << 10000 + 1000*i << '\n';
            return 0;
        }
        else if(ar[i] == 2) {
            cout << 1000 + 100*i << '\n';
            return 0;
        }
        else if(ar[i] == 1){
            max = i;
        }
        else {
            continue;
        }
    }
    cout << max*100 << '\n';
}