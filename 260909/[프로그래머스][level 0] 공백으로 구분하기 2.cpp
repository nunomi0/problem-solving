#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string part = "";
    for (int i = 0; i<my_string.length(); i++){
        if (my_string[i]==' ' && part!=""){
            answer.push_back(part);
            part="";
        }
        if (my_string[i]!=' ') part+=my_string[i];
    }
    if (part!="") answer.push_back(part);
    
    return answer;
}