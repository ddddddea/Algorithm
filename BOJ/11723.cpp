#include <bits/stdc++.h>
using namespace std;

int ar[22];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int M;
    cin >> M;
    while(M--){
        string ord;
        cin >> ord;
        if(ord == "add") {
            int n;
            cin >> n;
            ar[n] = 1;
        }
        else if(ord == "remove"){
            int n;
            cin >> n;
            ar[n] = 0;
        }
        else if(ord == "check"){
            int n;
            cin >> n;
            if(ar[n] == 1) cout  << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(ord == "toggle"){
            int n;
            cin >> n;
            if(ar[n] == 1) ar[n] = 0;
            else ar[n] = 1;
        }
        else if(ord == "all"){
            for(int i = 1; i <= 20; i++) ar[i] = 1;
        }
        else { //empty
            for(int i = 1; i <= 20; i++) ar[i] = 0;
        }
    }
}