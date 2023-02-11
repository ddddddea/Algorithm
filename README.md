# BaaaarkingDog Algorithm
BaaaarkingDog(https://blog.encrypted.gg/) 님의 실전 알고리즘 강의 정리

## TODO
1. 메모리 구조 정리
2. 음수, 소수 표현법
3. C++ string 관련 함수 정리   
    - substr
    - stoi
    - c_str   
4. for + auto 순회

## 0x02-기초 코드 작성 요령 II
[기본문제 풀이] : **완료**:tada:  
[응용문제 풀이] : **완료**:tada:  

[Check-Point]

## 0x03-배열
[기본문제 풀이] : **완료**:tada:  
[응용문제 풀이] : **완료**:tada:  

[Check-Point]
1. 두 수의 합(3273) 과 같이 양 방향으로 index 를 다룰 때, 겹치는 지점 처리 조심하기   
   - 배열의 길이가 홀수, 짝수에 따라 중간에서 중복되는 경우   

## 0x04-리스트
[기본문제 풀이] : **완료**:tada:     
[응용문제 풀이] : **완료**:tada:   


[Check-Point]   
1. 항상 포인터가 처음, 끝으로 이동하게 될 때를 생각해서 잘 처리해주기   
   - 맨 끝을 지운다면 현재 포인터의 위치는? 포인터를 어떻게 처리해야 할까?
3. insert, erase 함수는 지운 위치를 그대로 반환함에 유의하자   
   - 에디터, 키로거 같은 문제에서는 위 같은 특성 때문에 문자열이 잘못추가 되는 경우가 생길 수 있음

## 0x05-스택
[기본문제 풀이] : **완료**:tada:   
[응용문제 풀이] : 진행중   
 
[Check-Point]

## 0x06-큐
[기본문제 풀이] : **완료**:tada:   
 
[Check-Point]
 
## 0x07-덱
[기본문제 풀이] : **완료**:tada:   
[응용문제 풀이] : 진행중   
 
[Check-Point]
1. Deque 는 [] 을 이용해서 Random Access 가능 
2. **시작, 끝점의 index 의 Pointer 로 왔다 갔다 할 때 항상 0이 될 때 어떻게 되나 주의 깊게 볼 것**
 
## 0x09-BFS
[기본문제 풀이] : 진행중      
[응용문제 풀이] : 진행중   

[Check-Point]
1. BFS 응용해서 거리 구하는 방법 Check + Barkingdog 풀이 체화(미로탐색)

## 0x0B-재귀
[기본문제 풀이] : 진행중      
[응용문제 풀이] : 진행중   
   
[Check-Point]
1. 분할 정복을 통한 곱셈 구현시 overflow 주의, 특히 값이 곱해질 때 바로 Overflow 되는 경우 있음
2. 재귀적으로 생각 Base Condition 정하고, 함수 Parameter 정의하고, n 일때 잘 된다고 생각하고 n+1 일때도 잘 되도록 구성


## 0x13-이분탐색
[기본문제 풀이] : 진행중      
[응용문제 풀이] : 진행중   
  
[Check-Point]
1. lower, upper idx 구할 때,끼워넣어서 정렬이 유지되도록 하는 위치를 구하도록 start, end, mid 를 결정하자
2. end 가 어디서 시작해야 하는지도 주의, target 이 크기 N의 배열의 최대값보다 큰 경우 N 번째에 넣어야함

