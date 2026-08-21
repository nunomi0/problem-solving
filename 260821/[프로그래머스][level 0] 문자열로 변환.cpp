#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string s = "";
    
    while (n!=0){
        s+=n%10+'0';
        n/=10;
    }
    
    string ss = "";
    for (int i = s.length()-1; i>=0; i--){
        ss+=s[i];
    }
    
    return ss;
}