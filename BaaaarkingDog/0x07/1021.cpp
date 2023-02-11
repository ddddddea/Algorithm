#include <bits/stdc++.h>
using namespace std;

int N, M, ans;
deque<int> dq;

void solve(int target){
    if(dq.front() == target) {dq.pop_front(); return;}
    int i;
    for(i = 0; i < dq.size(); i++) if(dq[i] == target) break;
    // 2 를 이용할 경우 = i번
    // 3 을 이용할 경우 = N-i+1
    if(i < dq.size() - i){ // 2번이 더 적은 경우
        ans += i;
        for(int j = 0; j < i; j++) {
            int fr = dq.front(); 
            dq.pop_front();
            dq.push_back(fr);
        }
    }
    else { // 3번이 더 적은 경우
        ans += dq.size() - i;
        for(int j = 0; j < dq.size() - i; j++) {
            int bc = dq.back();
            dq.pop_back();
            dq.push_front(bc);
        }
    }
    dq.pop_front();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cin >> N >> M;
    for(int i = 1; i <= N; i++) dq.push_back(i);
    
    while(M--) {
        int target;
        cin >> target;
        solve(target);
    }
    cout << ans << '\n';
}