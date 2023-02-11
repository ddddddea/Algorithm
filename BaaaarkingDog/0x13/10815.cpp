#include <bits/stdc++.h>
using namespace std;

int N,M;
int ar[500100];

int my_binary_search(int target){
    int s = 0, e = N-1;
    while(s <= e) {
        int mid = (s+e)/2;
        if(ar[mid] == target) {
            return 1;
        }
        else if(ar[mid] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++) cin >> ar[i];
    cin >> M;
    sort(ar, ar+N);
    for(int i = 0; i < M; i++) {
        int target;
        cin >> target;
        cout << my_binary_search(target) << " ";
    }
    cout << '\n';
}