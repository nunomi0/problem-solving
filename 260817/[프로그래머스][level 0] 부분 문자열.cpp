#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    
    for (int i = 0; i<str2.length()-str1.length()+1; i++){
        bool check = true;
        for (int j = 0; j<str1.length(); j++){
            if (str2[i+j]!=str1[j]) check=false;
            if (!check) break;
        }
        if (check) return 1;
    }
    
    return 0;
}