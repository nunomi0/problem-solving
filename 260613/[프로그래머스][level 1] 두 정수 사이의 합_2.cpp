#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    
    // a, a+d, a+2d, ..., a+(n-1)d
    // S = (n/2) * (a + (a+(n-1)*d)) = n(a+l)/2
    
    // 등차수열의 합 = (첫 번째 수 + 마지막 수) × 개수 / 2
    
    return (long long)(a+b)*(abs(a-b)+1)/2;
}