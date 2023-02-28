#include <bits/stdc++.h>
using namespace std;

int ar[110];

void my_swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) ar[i] = i;
    while(m--) {
        int a, b;
        cin >> a >> b;
        my_swap(ar[a], ar[b]);
    }
    for(int i = 1; i <= n; i++) cout << ar[i] << " ";
}