#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int str2int(string& str) {
    int ret = 0;
    int str_len = str.length();
    for(int i = 0; i < str_len; i++){
        ret += (pow(10, (str_len - i - 1))) * (str[i] - 48);
    }
    return ret;
}


void parsing_str(string& str){
    dq.clear();
    int str_len = str.length();
    int j = 1;
    for(int i = 1; i < str_len; i++) {
        if(str[i] == ',' || str[i] == ']') {
            string s = str.substr(j, i - j);
            dq.push_back(str2int(s));
            j = i + 1;
        }
    }
}

void my_print(int s, int e, int size) {
    if(size == 0) {
        cout << "[]" << '\n';
        return;
    }
    cout << "[";
    if(s < e) {
        for(int i = s; i <= e; i++) {
            if(i == e) cout << dq[i];
            else cout << dq[i] << ",";
        }
    }
    else { // s > e
        for(int i = s; i >= e; i--) {
            if(i == e) cout << dq[i];
            else cout << dq[i] << ",";
        }
    }
    cout << "]" << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        string ord, ar; int n;
        cin >> ord >> n >> ar;
        //cout <<"!! ord: " << ord << '\n';
        parsing_str(ar);
        // cout << '\n' << "===============" << '\n';
        // for(int i = 0; i < dq.size(); i++) cout << dq[i] << " ";
        // cout << '\n' << "===============" << '\n';
        // initialize /////////////////////
        int size = n;
        int fr = 0, back = n-1;
        int ord_len = ord.length();
        bool flag = true;
        ///////////////////////////////////
        for(int i = 0; i < ord_len; i++) {
            char ord_ = ord[i];
            //cout <<"ord : " << ord_ << '\n';
            if(ord_ == 'R') {
                int tmp = fr;
                fr = back;
                back = tmp;
                // my_print(fr, back);
                // cout << "=======================" << '\n';
            }
            else { // D
                if(size == 0) {
                    cout << "error" << '\n';
                    flag = false;
                    break;
                }
                else {
                    size--;
                    if(fr > back) fr -= 1;
                    else fr += 1;
                }
            }
        }
        if(flag) {
           my_print(fr, back, size);
        }
    }
}