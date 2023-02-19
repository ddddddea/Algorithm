#include <bits/stdc++.h>
using namespace std;


class Member{
    public:
        int n, age;
        string name;
        Member(int n, int age, string name) {
            this->n = n;
            this->age = age;
            this->name = name;
        }
};

bool operator <(const Member& l, const Member& r) {
    if(l.age == r.age) return l.n < r.n;
    else return l.age < r.age;
}

vector<Member> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back(Member(i, age, name));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++) {
        cout << v[i].age << " " << v[i].name << '\n';
    }
}