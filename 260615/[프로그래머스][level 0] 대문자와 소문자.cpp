#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    for (int i = 0; i<s.size(); i++){
        if ('A'<=s[i] && s[i]<='Z') s[i]+='a'-'A';
        else s[i]+='A'-'a';
    }
    return s;
}