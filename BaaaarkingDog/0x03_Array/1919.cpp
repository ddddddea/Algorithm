#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ar[26], br[26];

void my_check(string& a, string& b) {
    int ans = 0;
    int len_a = a.length();
    int len_b = b.length();

    for(int i = 0; i < len_a; i++){
        ar[a[i]-97]++;
    }
    for(int i = 0; i < len_b; i++){
        br[b[i]-97]++;
    }
    for(int i = 0; i < 26; i++){
        ans += abs(ar[i] - br[i]);
    }
    cout << ans << '\n';
}

int main() {
    string a, b;
    cin >> a >> b;
    my_check(a, b);
}