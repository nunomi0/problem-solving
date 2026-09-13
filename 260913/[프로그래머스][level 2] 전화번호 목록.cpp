#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    
    sort(phone_book.begin(), phone_book.end());
    
    int a=0;
    int b=1;
    
    while (b<phone_book.size()){
        if (phone_book[a].length()<phone_book[b].length() && phone_book[b].substr(0,phone_book[a].length())==phone_book[a]) return false;
        else {
            a++;
            b=a+1;
        }
    }
    
    return true;
}