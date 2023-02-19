#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 3; i++) {
        int n, sum = 0;
        for(int j = 0; j < 4; j++) {
            cin >> n;
            sum += n;
        }
        if(sum == 0) cout << "D" << '\n';
        if(sum == 1) cout << "C" << '\n';
        if(sum == 2) cout << "B" << '\n';
        if(sum == 3) cout << "A" << '\n';
        if(sum == 4) cout << "E" << '\n';
        
    }
}