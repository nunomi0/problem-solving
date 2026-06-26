#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    // 약수의 개수가 홀수 -> 제곱수
    
    for (int i = left; i<=right; i++){
        int check=1;
        for (int j = 1; j*j<=i; j++){
            if (j*j==i) {
                check=-1;
                break;
            }
        }
        answer+=check*i;
    }
    return answer;
}