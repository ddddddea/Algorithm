#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=3;
    while(n--){
        int t=4,sum=0,i;
        while(t--){
            cin >> i;
            sum +=i;
        }
        if(sum==4) cout << "E" << '\n';
        else if(sum==3) cout << "A" << '\n';
        else if(sum==2) cout << "B" << '\n';
        else if(sum==1) cout << "C" << '\n';
        else cout << "D" << '\n';
    }

}