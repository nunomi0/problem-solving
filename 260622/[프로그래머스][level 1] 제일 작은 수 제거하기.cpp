#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int mn=999999999;
    
    for (int i = 0; i<arr.size(); i++){
        mn=min(mn,arr[i]);
    }
    
    for (int i = 0 ; i<arr.size(); i++){
        if (arr[i]==mn) continue;
        answer.push_back(arr[i]);
    }
    
    if (answer.empty()) answer.push_back(-1);
    
    return answer;
}