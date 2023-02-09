#include <iostream>
#include <string>
using namespace std;

int ar[26];

int main(){
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++) {
        ar[str[i]-97]++;
    }
    for(int i = 0; i < 26; i++) {
        cout << ar[i] << " ";
    }
    cout << '\n';
}