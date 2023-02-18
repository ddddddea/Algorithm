#include <bits/stdc++.h>
using namespace std;

vector<double> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    double sum = 0, M = -1;
    cin >> N;
    for(int i = 0; i < N; i++) {
        double score;
        cin >> score;
        v.push_back(score);
        if(score > M) M = score;
    }
    for(int i = 0; i < N; i++) {
        sum += v[i]/M * 100;
    }
    cout.precision(7);
    cout << sum/N << '\n';
}