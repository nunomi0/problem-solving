#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int solution(string begin, string target, vector<string> words) {    
    
    priority_queue<pair<int, string>, vector<pair<int,string>>, greater<pair<int,string>>> pq;
    pq.push({0,begin});
    
    map<string,bool> visited;
    
    while (!pq.empty()){
        string cur = pq.top().second;
        int cnt = pq.top().first;
        pq.pop();
        
        if (cur==target) return cnt;
        visited[cur]=true;
        
        for (int i = 0; i<words.size(); i++){
            string nxt = words[i];
            if (!visited[nxt]){
                int tmp = 0;
                for (int j = 0; j<cur.length(); j++){
                    if (cur[j]==nxt[j]) tmp++;
                }
                if (tmp==cur.length()-1) pq.push({cnt+1, nxt});
            }
        }
    }
    
    return 0;
}