#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> cnt;
    map<string, vector<pair<int, int>>> m;
    
    for (int i = 0; i<genres.size(); i++){
        cnt[genres[i]]+=plays[i];
        m[genres[i]].push_back({-plays[i], i});
    }
    
    vector<pair<int, string>> v;
    for (auto iter=cnt.begin(); iter!=cnt.end(); iter++){
        v.push_back({iter->second, iter->first});
    }
    
    sort(v.rbegin(), v.rend());
    
    for (int i = 0; i < v.size(); i++) {
        string genre = v[i].second;
        sort(m[genre].begin(), m[genre].end());
        answer.push_back(m[genre][0].second);

        if (m[genre].size() >= 2) {
            answer.push_back(m[genre][1].second);
        }
    }
    
    return answer;
}