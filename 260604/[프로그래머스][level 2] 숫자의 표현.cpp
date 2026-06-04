#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i<=n; i++){
        int s = 0;
        for (int j = 0; j<=n; j++){
            s+=i+j;
            if (s>=n) {
                if (s==n) answer++;
                break;
            }
        }
    }
    
    return answer;
}