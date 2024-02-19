#include <bits/stdc++.h>
using namespace std;

double ar[1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n, max = -1.0, sum = 0.0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> ar[i];
        if(ar[i] > max) max = ar[i];
    }
    cout.precision(10);
    for(int i=0; i<n; i++) {
        ar[i] = ar[i]/max *100.0;
        sum += ar[i];
    }
    cout << sum/n << '\n';
}