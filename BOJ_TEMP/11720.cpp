    #include <bits/stdc++.h>
    using namespace std;


    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string str;
        int n, sum=0;
        cin >> n >> str;
        for(int i=0; i<n; i++) {
            char c[2];
            c[0] = str[i];
            sum += atoi(c);
        }
        cout << sum << '\n';
    }