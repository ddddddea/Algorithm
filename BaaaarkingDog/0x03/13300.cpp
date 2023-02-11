#include <iostream>
using namespace std;

int ar[7][2];
int N, K, a, b, ans;

int main() {
    cin >> N >> K;
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        ar[b][a]++;
    }
    
    for(int i = 1; i <= 6; i++){
        for(int j = 0; j <= 1; j++) {
            (ar[i][j]%K == 0) ? (ans += ar[i][j]/K) : (ans += ar[i][j]/K + 1);
        }
    }
    cout << ans << '\n';    
}
