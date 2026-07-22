#include <string>
#include <vector>
#include <iostream>

using namespace std;

int answer = -1;
int n;
vector<vector<int>> c, h;


void recur(int cur, int stage, int available[20]){    
    // 스테이지 끝까지 간 경우
    if (stage>n) { 
        if (answer==-1) answer=cur;
        else answer=min(answer,cur);
        return;
    }
    
    // 해결 비용 계산 (힌트 번들 구매 X)
    recur(cur+c[stage-1][min(available[stage],n-1)], stage+1, available);
    
    // 해결 비용 계산 (힌트 번들 구매 O)
    if (stage < n){
        int new_available[20];
        for (int j = 0; j<20; j++) new_available[j]=available[j];
        for (int j = 1; j<h[stage-1].size(); j++) new_available[h[stage-1][j]]++;
        recur(cur+c[stage-1][min(available[stage],n-1)]+h[stage-1][0], stage+1, new_available);
    }
}

int solution(vector<vector<int>> cost, vector<vector<int>> hint) {
    
    n = cost.size();
    c = cost;
    h = hint;
    
    // brute force (recur)
    // 고려해야 할 것
    // 1. 현재 스테이지에서 힌트 사용 i개 (사용 가능하다면)
    // 2. 현재 스테이지에서 힌트 번들 구매 or not
    
    int arr[20] = {};
    recur(0, 1, arr);
    
    return answer;
}