#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i = 1;
    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        else {
            int tmp;
            while(n--) cin >> tmp;
            cout << "Case " << i << ": Sorting... done!" << '\n';
            i++;
        }
    }
}