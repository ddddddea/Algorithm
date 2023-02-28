#include <bits/stdc++.h>
using namespace std;

class Num{
public:
    int n;
    int cnt;
    int seq;
    Num() {}
    Num(int n, int cnt, int seq) {
        this->n = n;
        this->cnt = cnt;
        this->seq = seq;
    }
};

bool cmp(Num& a, Num& b) {
    if(a.cnt == b.cnt) return a.seq < b.seq;
    else return a.cnt > b.cnt;
}

void run(int target, int seq, vector<Num>& v) {
    for(int i = 0; i < (int)v.size(); i++) {
        if(target == v.at(i).n) {
            v.at(i).cnt++;
            return;        
        }
    }
    v.push_back(Num(target, 1, seq));
}
vector<Num> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, C, num;
    cin >> N >> C;
    for(int i = 0; i < N; i++) {
        cin >> num;
        run(num, i, v);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < (int)v.size(); i++) {
        for(int j = 0; j < v.at(i).cnt; j++) {
            cout << v.at(i).n << " ";
        }
    }
}