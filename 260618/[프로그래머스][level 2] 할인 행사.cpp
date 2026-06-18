#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    
    map<string, int> wantList;
    for (int i = 0; i<want.size(); i++){
        wantList[want[i]]=number[i];
    }
        
    map<string, int> buyList;
    for (int i = 0; i<10; i++){
        buyList[discount[i]]++;
    }
    
    int answer = 0;
    
    for (int i = 10; i<discount.size(); i++){
        int check=true;
        for (auto iter = wantList.begin(); iter!=wantList.end(); iter++){
            if (buyList[iter->first]<iter->second) check=false;
        }
        if (check) answer++;
        
        buyList[discount[i-10]]--;
        buyList[discount[i]]++;
    }
    
    int check=true;
    for (auto iter = wantList.begin(); iter!=wantList.end(); iter++){
        if (buyList[iter->first]<iter->second) check=false;
    }
    if (check) answer++;
    
    return answer;
}