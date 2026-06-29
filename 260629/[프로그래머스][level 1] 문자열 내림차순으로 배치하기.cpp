#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> v;
    for (int i = 0; i<s.length(); i++) v.push_back(int(s[i]));
    sort(v.rbegin(), v.rend());
    
    string answer = "";
    for (int i = 0 ; i<s.length(); i++) answer+=char(v[i]);
    return answer;
}