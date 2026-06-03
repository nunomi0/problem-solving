#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    
    for (int i = 0; i<s.length(); i++){
        if ('A'<=s[i] && s[i]<='Z') s[i]-='A'-'a';
        if ('a'<=s[i] && s[i]<='z'){
            if (i==0 || (i!=0 && s[i-1]==' ')) s[i]+='A'-'a';
        }
    }
    return s;
}