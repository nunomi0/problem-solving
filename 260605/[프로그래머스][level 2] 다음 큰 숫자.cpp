#include <string>
#include <vector>
#include <bitset>
#include <iostream>

using namespace std;

int solution(int n) {
    
    // 1001110
    // 1010011
    
    // 1111
    // 10111
    
    string s = bitset<31>(n).to_string();
    s = s.substr(s.find('1'));
    s = '0' + s;
    
    // 1. 뒤에서 부터 '01' 문자열 패턴을 찾은 후 '11'로 변경
    // 2. 뒤쪽의 남은 1들은 가장 오른쪽으로 재배치
    
    for (int i = s.length()-1; i>=1; i--) {
        if (s[i-1] == '0' && s[i] == '1'){
            s[i-1]='1';
            int cnt = 0;
            for (int j = i; j<s.length(); j++) if (s[j]=='1') cnt++;
            for (int j = i; j<s.length(); j++) s[j]='0';
            for (int j = 0; j<cnt-1; j++) s[s.length()-1-j]='1';
            break;
        }
    }
    
    return stoi(s,nullptr,2);
}