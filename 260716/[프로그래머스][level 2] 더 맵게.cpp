#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int k) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq; 
    for (int i = 0; i<scoville.size(); i++) pq.push(scoville[i]);

    while (pq.size()>=2){
        if (pq.top()>=k) break;
        answer++;
        int tmp = pq.top();
        pq.pop();
        tmp+=pq.top()*2;
        pq.pop();
        pq.push(tmp);
    }
    
    if (pq.top()>=k) return answer;
    return -1;
}