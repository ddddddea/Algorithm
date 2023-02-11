#include <bits/stdc++.h>
using namespace std;

int N,M;
int arN[500010], arM[500010];
vector<int> v;

bool my_find(int target) {
    int s = 0, e = M-1;
    while(s <= e) {
        int mid = (s+e)/2;
        if(arM[mid] == target) return true;
        else if(arM[mid] < target) s = mid + 1;
        else e = mid - 1;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    for(int i = 0; i < N; i++) cin >> arN[i];
    for(int i = 0; i < M; i++) cin >> arM[i];
    sort(arN, arN + N);
    sort(arM, arM + M);

    for(int i = 0; i < N; i++) {
        if(!my_find(arN[i])) v.push_back(arN[i]);
    }
    if(v.empty()) cout << "0" << '\n';
    else {
        cout << v.size() << '\n';
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
    }
}