#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {    
    for (int i = 0; i<str1.length(); i++){
        bool check = true;
        for (int j = 0; j<str2.length(); j++){
            if (i+j>=str1.length() || str1[i+j]!=str2[j]) {
                check=false;
                break;
            }
        }
        if (check) return 1;
    }
    return 2;
}