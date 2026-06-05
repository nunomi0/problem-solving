#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    
    priority_queue<int> pq;
    for (int i = 0; i<works.size(); i++) pq.push(works[i]);
    
    while (n--){
        int p = pq.top();
        pq.pop();
        if (p==0) return 0;
        pq.push(p-1);
    }
    
    while (!pq.empty()){
        int p = pq.top();
        pq.pop();
        answer+=p*p;
    }
    
    return answer;
}