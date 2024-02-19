#include <bits/stdc++.h>
using namespace std;

int ar[6] = {1,1,2,2,2,8};
int br[6];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<6; i++) cin >> br[i];
    for(int i=0; i<6; i++) cout << ar[i]-br[i] << " ";
    cout << '\n';

}