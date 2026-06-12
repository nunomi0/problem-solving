#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {    
    map<string, bool> mp;
    
    mp[words[0]]=true;
    
    int idx = 1;
    int cnt = 1;
    
    while (idx<words.size()){
        if (idx%n==0) cnt++;
        if (mp[words[idx]] || words[idx-1][words[idx-1].length()-1]!=words[idx][0]) return {idx%n+1,cnt};
        mp[words[idx]]=true;
        idx++;
    }

    return {0,0};
}