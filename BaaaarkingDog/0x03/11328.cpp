#include <iostream>
#include <string>
using namespace std;

int ar[26], br[26];

void my_strfry(string& a, string& b) {
    for(int i = 0; i < 26; i++) ar[i] = br[i] = 0;
    int len_a = a.length();
    int len_b = b.length();
    for(int i = 0; i < len_a; i++){
        ar[a[i]-97]++;
    }
    for(int i = 0; i < len_b; i++){
        br[b[i]-97]++;
    }
    for(int i = 0; i < 26; i++) {
        if(ar[i] != br[i]) {
            cout << "Impossible" << '\n';
            return;
        }
    }
    cout << "Possible" << '\n';
}

int main(){
    int T; string a, b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        my_strfry(a, b);
    }
}