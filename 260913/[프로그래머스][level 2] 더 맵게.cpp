#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i<scoville.size(); i++){
        pq.push(scoville[i]);
    }
    
    while (pq.size()>1){
        if (pq.top()>=K) return answer;
        answer++;
        long long tmp=pq.top();
        pq.pop();
        tmp+=pq.top()*2;
        pq.pop();
        pq.push(tmp);
    }
    
    if (!pq.empty() && pq.top()>=K) return answer;
    
    return -1;
}