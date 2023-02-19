#include <bits/stdc++.h>
using namespace std;

int N, M;
int ar[500100];

int find_lower(int target) {
    int s = 0, e = N;
    while(s < e) {
        int mid = (s+e)/2;
        if(ar[mid] >= target) {
            e = mid;
        }
        else {
            s = mid+1;
        }
    }
    return s;
}

int find_upper(int target){
    int s = 0, e = N; 
    while(s < e){
        int mid = (s+e)/2;
        if(ar[mid] > target) {
            e = mid;
        }
        else { 
            s = mid+1;
        }
    }
    return s;
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
    for(int i = 0; i < M; i++) {
        int target;
        cin >> target;
        cout << find_upper(target) - find_lower(target) << " ";
    }
    cout << '\n';
}