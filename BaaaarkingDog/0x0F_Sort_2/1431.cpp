#include <bits/stdc++.h>
using namespace std;

bool cmp(string& a, string& b) {
    int len_a = a.length();
    int len_b = b.length();
    if(len_a != len_b) return (len_a < len_b);
    int sum_a = 0, sum_b = 0;
    for(int i = 0; i < len_a; i++) {
        if(isdigit(a[i])) sum_a += (int)(a[i] - '0');
        if(isdigit(b[i])) sum_b += (int)(b[i] - '0');
    }   
    if(sum_a == sum_b) return a < b;
    else return sum_a < sum_b;
}

string ar[55];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar+n, cmp);
    for(int i = 0; i < n; i++) cout << ar[i] << '\n';
}