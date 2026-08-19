#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    
    for (int i = 0; i<myString.length(); i++) myString[i]=toupper(myString[i]);
    for (int i = 0; i<pat.length(); i++) pat[i]=toupper(pat[i]);
    
    for (int i = 0; i<myString.length(); i++){
        bool check = true;
        for (int j = 0; j<pat.length(); j++){
            if (myString[i+j]!=pat[j]) check=false;
            if (!check) break;
        }
        if (check) return 1;
    }
    
    return 0;
}