#include <bits/stdc++.h>
using namespace std;

int ar[110];

void my_swap(int a, int b) {
    if(a >= b) return;
    int temp = ar[a];
    ar[a] = ar[b];
    ar[b] = temp;
    my_swap(a+1, b-1);
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
        my_swap(a, b);
    }
    for(int i = 1; i <= n; i++) cout << ar[i] << " ";
}