#include <iostream>
using namespace std;

int solution(int n)
{
    // n을 2진수로 변환 시 1의 개수 반환
    // __builtin_popcount(n);
    int ans=0;
    for(int i=0; i<31; i++) if (n&(1<<i)) ans++;    
    return ans;
}