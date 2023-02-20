#include <bits/stdc++.h>
using namespace std;


int ar[105][105];

void my_print() {
    cout << "========================================" << '\n';
    for(int i = 0; i < 27; i++) {
        for(int j = 0; j < 27; j++) {
            cout << ar[i][j] << " ";
        }
        cout << '\n';
    }
    cout << "========================================" << '\n' << '\n';
}

void draw(int r, int c){
    for(int i = r; i < r + 10; i++) {
        for(int j = c; j < c + 10; j++) {
            ar[i][j] = 1;
        }
    }
}

void chk() {
    int area = 0;
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(ar[i][j] == 1) area += 1;
        }
    }
    cout << area << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    while(N--) {
        int r, c;
        cin >> c >> r;
        draw(r, c);
    }
    chk();
}