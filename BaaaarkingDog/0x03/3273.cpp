#include <iostream>
using namespace std;

int ar[2000010];
int n, x, tmp, cnt = 0, r;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;   
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        ar[tmp]++;
    }
    cin >> x;
    (x % 2 == 0) ? (r = x/2-1):(r = x/2);
    for(int i = 1; i <= r; i++){
        if(ar[i] != 0 && ar[x-i] != 0) cnt++;  
    }
    cout << cnt << '\n';
}