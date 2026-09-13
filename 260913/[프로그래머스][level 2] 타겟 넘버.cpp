#include <string>
#include <vector>

using namespace std;

int answer=0;

void recur(int cur, int hap, vector<int>& numbers, int& target){
    if (cur==numbers.size()) {
        if (hap==target) answer++;
        return;
    }
    recur(cur+1, hap+numbers[cur], numbers, target);
    recur(cur+1, hap-numbers[cur], numbers, target);
}

int solution(vector<int> numbers, int target) {
    recur(0,0,numbers,target);
    return answer;
}