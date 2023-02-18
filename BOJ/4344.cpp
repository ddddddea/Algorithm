#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;
    cin >> c;
    while(c--) {
        int n;
        double sum = 0;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int score;
            cin >> score;
            sum += score;
            v.push_back(score);
        }
        cout.precision(3);
        double avg = sum / n;
    }

}