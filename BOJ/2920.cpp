#include <bits/stdc++.h>
using namespace std;

string asc = "1 2 3 4 5 6 7 8";
string des = "8 7 6 5 4 3 2 1";

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin, str);
    if(asc == str) cout << "ascending" << '\n';
    else if(des == str) cout << "descending" << '\n';
    else cout << "mixed" << '\n';
 }
