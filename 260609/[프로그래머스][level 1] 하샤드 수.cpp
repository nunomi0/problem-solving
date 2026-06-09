#include <string>
#include <vector>

using namespace std;

bool solution(int x) {    
    int hap = 0;
    int tmp = x;
    while (tmp>0){
        hap+=tmp%10;
        tmp/=10;
    }
    if (x%hap==0) return true;
    else return false;
}