#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    map<string, int> wantList, buyList;
    int answer = 0;

    for (int i = 0; i<want.size(); i++) wantList[want[i]]=number[i];
    
    for (int i = 0; i < discount.size(); i++) {
        buyList[discount[i]]++;
        if (i >= 10) {
            buyList[discount[i-10]]--;
            if (buyList[discount[i-10]]==0) buyList.erase(discount[i-10]);
        }
        if (wantList == buyList) answer++;
    }

    return answer;
}