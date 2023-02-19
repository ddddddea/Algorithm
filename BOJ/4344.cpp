#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;
    cin >> c;
    while(c--) {
        int n;
        cin >> n;
        double avg = 0;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int score;
            cin >> score;
            avg += score;
            v.push_back(score);
        }
        avg /= n;
        double num = 0;
        for(auto i : v) {
            if(i > avg) num += 1;
        }
        cout << fixed;
        cout.precision(3);
        cout << 100.0 * num/n << "%\n";
    }
}