#include <bits/stdc++.h>
using namespace std;
#define lli long long int

lli go(lli a, lli b, lli c) {
    if(b==1) {
        return a%c;
    }
    else {
        if(b%2==0) {
            return go(a, b/2, c)*go(a, b/2, c)%c;
        }
        else return go(a, b/2, c)*go(a, b/2, c)%c*a%c;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli a, b, c;
    cin >> a >> b >> c;
    cout << go(a, b, c);

}