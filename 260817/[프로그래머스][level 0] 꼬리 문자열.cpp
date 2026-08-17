#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    
    for (int i = 0; i<str_list.size(); i++){
        bool except = false;
        for (int j = 0; j<str_list[i].length(); j++){
            bool check = true;
            for (int k = 0; k<ex.length(); k++){
                if (str_list[i][j+k]!=ex[k]) check = false;
                if (!check) break;
            }
            if (check) except = true;
        }
        if (except) continue;
        answer+=str_list[i];
    }
    
    return answer;
}