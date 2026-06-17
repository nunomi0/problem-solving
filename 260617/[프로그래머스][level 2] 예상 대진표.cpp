#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    a--;
    b--;
    
    while (true) {
        if (a/2==b/2) return answer;
        a/=2;
        b/=2;
        answer++;
    }

    return answer;
}