#include <bits/stdc++.h>
using namespace std;

int heap[100005];
int sz = 0; // heap에 들어있는 원소의 수

void push(int x){
    sz++;
    heap[sz] = x;
    int idx = sz;
    while(idx != 1) {
        int par = idx/2;
        if(heap[par] <= heap[idx]) break;
        else{
            int tmp = heap[par];
            heap[par] = heap[idx];
            heap[idx] = tmp;
        }
        idx = par;
    }
}

int top(){
    return heap[1];
}

void pop(){
    if(sz == 0) cout << 0 << '\n';
    else {
        heap[1] = heap[sz];
        sz--;
        while(1) {
            
        }
    }
}

void test(){
  push(10); push(2); push(5); push(9); // {10, 2, 5, 9}
  cout << top() << '\n'; // 2
  pop(); // {10, 5, 9}
  pop(); // {10, 9}
  cout << top() << '\n'; // 9
  push(5); push(15); // {10, 9, 5, 15}
  cout << top() << '\n'; // 5
  pop(); // {10, 9, 15}
  cout << top() << '\n'; // 9
}

int main(){
  test();
}