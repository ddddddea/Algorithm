#include <iostream>
#include <algorithm>
using namespace std;

int ar[100010]; 
int N, M;

void my_binary_search(int target) {
    int s = 0, e = N-1;
    while(s <= e){
        int mid = (s+e)/2;
        if(ar[mid] == target) {
            cout << "1" << '\n';
            return;
        }
        else if(ar[mid] < target){
            s = mid + 1;
        }
        else {
            e = mid -1;
        }
    }
    cout << "0" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> ar[i];
    }
    sort(ar, ar+N);
    cin >> M;
    while(M--){
        int target;
        cin >> target;
        my_binary_search(target);
    }
}