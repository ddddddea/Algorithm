#include <bits/stdc++.h>
using namespace std;

int rect[110][110];
void draw(int r, int c, int n) {
    for(int i=r; i<r+n; i++) {
        for(int j=c; j<c+n; j++) {
            rect[i][j]=1;
        }
    }
}
void show() {
    for(int i=1; i<=100; i++) {
        for(int j=1; j<=100; j++) {
            cout << rect[i][j];
        }
        cout << '\n';
    }
}
void cnt() {
    int ans=0;
    for(int i=1; i<=100; i++) {
        for(int j=1; j<=100; j++) {
            ans +=rect[i][j];
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        int r, c;
        cin >> c >> r;
        draw(r,c,10);
    }
    cnt();
    //show();

}