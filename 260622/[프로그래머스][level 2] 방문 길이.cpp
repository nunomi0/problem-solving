#include <string>
#include <map>
#include <iostream>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    
    string s = "LURD";
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    map<pair<pair<int,int>, pair<int,int>>, bool> m;
    
    int cx = 0;
    int cy = 0;
    int nx = 0;
    int ny = 0;
    
    for (int i = 0; i<dirs.length(); i++){
        for (int j = 0; j<4; j++){
            if (s[j]==dirs[i]){
                nx = cx + dx[j];
                ny = cy + dy[j];
                break;
            }
        }
        
        if (!(-5<=nx && nx<=5 && -5<=ny && ny<=5)) continue;
        
        pair<pair<int,int>, pair<int,int>> p = {{cx, cy}, {nx, ny}};
        if (p.first>p.second) swap(p.first, p.second);
        
        if (!m[p]) {
            answer++;
            m[p]=true;
        }
        
        cx=nx;
        cy=ny;
    }
    
    return answer;
}