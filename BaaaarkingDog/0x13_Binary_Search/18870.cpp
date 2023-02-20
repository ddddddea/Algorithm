#include <bits/stdc++.h>
using namespace std;

vector<int> v;
unordered_set<int> s;
int N; int num;

void my_binary(int target, vector<int>& pv) {
    int mid, s = 0, e = N-1;
    while(s <= e) {
        mid = (s+e)/2;
        if(pv[mid] == target) break;
        else if(pv[mid] > target) e = mid-1;
        else s = mid + 1;
    }
    cout << mid << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
        s.insert(num);
    }
    vector<int> v_sorted(s.begin(), s.end());
    sort(v_sorted.begin(), v_sorted.end());
    for(int i = 0; i < N; i++) {
        my_binary(v[i], v_sorted);
    }
}