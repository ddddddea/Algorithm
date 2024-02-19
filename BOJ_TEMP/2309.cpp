#include <bits/stdc++.h>
using namespace std;

int ar[9], sum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<9; i++) {
        cin >> ar[i];
        sum+=ar[i];
    }
        bool flag=false;
    for(int i=0; i<8; i++){
        if(flag) break;
        for(int j=i+1; j<9; j++) {
            int tmp=ar[i]+ar[j];
            if(sum-tmp==100) {
                ar[i]=ar[j]=-1;
                flag=true;
                break;
            }
        }
    }
    sort(ar, ar+9);
    for(int i=2; i<9; i++) cout << ar[i] << '\n';
}