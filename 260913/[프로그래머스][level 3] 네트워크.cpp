#include <string>
#include <vector>

using namespace std;

bool visited[210];

void recur(int cur, vector<vector<int>> &computers){
    visited[cur]=true;
    for (int nxt = 0; nxt<computers.size(); nxt++){
        if (!visited[nxt] && computers[cur][nxt]==1) recur(nxt,computers);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i<computers.size(); i++){
        if (!visited[i]){
            answer++;
            recur(i,computers);
        }
    }
    return answer;
}