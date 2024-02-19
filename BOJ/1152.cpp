#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> words;
    string word;
    while (getline(ss, word, ' ')){
        words.push_back(word);
    }
    if(words.size()==1 && words.front().length()==0) {
        cout << 0 << '\n';
        return 0;
    }
   int diff=0;
   if(words.front().length()==0) diff++;
   if(words.back().length()==0) diff++;
    cout << words.size()-diff << '\n';
}