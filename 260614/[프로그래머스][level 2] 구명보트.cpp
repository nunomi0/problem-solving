#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    bool visited[50010];
    
    memset(visited,false,sizeof(visited));
    
    // 무거운 사람끼리 먼저 묶는다
    // 정렬 + 이중 반복문 시간초과 -> 이분탐색
    
    sort(people.rbegin(), people.rend());
    
    for (int i = 0; i<people.size(); i++){
        
        if (visited[i]) continue;
        visited[i]=true;
        
        int s = i+1;
        int e = people.size()-1;
        int idx = 50001;
        
        while (s<=e){
            int m = (s+e)/2;
            if (people[i]+people[m]<=limit){
                idx=min(idx,m);
                e=m-1; // 가장 인덱스가 작은 값 선택
            }
            else s=m+1;
        }
        
        while (visited[idx]) idx++;
        if (idx<people.size()) visited[idx]=true;
        answer++;
    }
    return answer;
}