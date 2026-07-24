#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    string s = "124";
    
    while (n) {
        n--;
        answer+=s[n%3];
        n/=3;
    }
    
    reverse(answer.begin(), answer.end());
    return answer;
}