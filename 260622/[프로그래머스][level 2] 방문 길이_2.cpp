#include <string>
#include <iostream>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    int visited[12][12][12][12];
    
    string s = "LURD";
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    int cx = 5;
    int cy = 5;
    int nx = 5;
    int ny = 5;
    
    for (int i = 0; i<dirs.length(); i++){
        
        for (int j = 0; j<4; j++){
            if (dirs[i]==s[j]){
                nx = cx + dx[j];
                ny = cy + dy[j];
                break;
            }
        }
        
        if (!(0<=nx && nx<=10 && 0<=ny && ny<=10)) continue;

        if (!visited[cx][cy][nx][ny]){
            visited[cx][cy][nx][ny]=true;
            visited[nx][ny][cx][cy]=true;
            answer++;
        }
        
        cx=nx;
        cy=ny;
    }
    
    return answer;
}