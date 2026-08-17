#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

bool available(string s){
    stack<char> st;
    vector<string> v = {"()", "[]", "{}"};
    
    for (int i = 0; i<s.length(); i++){
        for (int j = 0; j<v.size(); j++){
            if (s[i]==v[j][0]) st.push(s[i]);
            else if (s[i]==v[j][1]){
                if (st.empty() || st.top()!=v[j][0]) return false;
                st.pop();
            }
        }
    }
    
    return st.empty() ? true : false;
}

int solution(string s) {
    int answer = 0;
    
    for (int i = 0; i<s.length(); i++){
        string ss = s.substr(i,s.length()-i) + s.substr(0,i);
        answer+=available(ss);
    }
    
    return answer;
}