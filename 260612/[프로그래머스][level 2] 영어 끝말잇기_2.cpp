#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {    
    map<string, bool> mp;
    mp[words[0]]=true;
    for (int i = 1; i<words.size(); i++){
        if (mp[words[i]] || words[i-1][words[i-1].length()-1]!=words[i][0]) return {i%n+1, i/n+1};
        mp[words[i]]=true;
    }
    return {0,0};
}