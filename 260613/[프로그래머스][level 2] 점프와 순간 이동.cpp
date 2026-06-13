#include <iostream>
using namespace std;

/*
1. 재귀 + 완전 탐색 -> 시간초과
2. dp -> 메모리 초과
*/

int solution(int n)
{
    
    // n에서 부터 시작
    // n이 홀수 → n - 1만 가능, 배터리 +1
    // n이 짝수 → n / 2가 최선, 배터리 +0
    
    int cnt = 0;
    
    while (n>0){
        if (n%2) {
            n--;
            cnt++;
        }
        else n/=2;
    }
    
    return cnt;
}