#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    sort(mats.rbegin(), mats.rend());
    
    for (int i = 0; i<park.size(); i++){
        for (int j = 0; j<park[0].size(); j++){
            
            if (park[i][j]=="-1"){
                for (int k = 0; k<mats.size(); k++){
                    if (mats[k]<=answer) continue;
                    
                    bool available = true;
                    
                    for (int ii = 0; ii<mats[k]; ii++){
                        for (int jj = 0; jj<mats[k]; jj++){                            
                            if (park.size()<=i+ii || park[0].size()<=j+jj || park[i+ii][j+jj]!="-1") {
                                available=false;
                                break;
                            }
                        }
                        if (!available) break;
                    }
                    if (available) {
                        answer=max(answer,mats[k]);
                        break;
                    }
                }
            }
        }
    }
    
    return answer;
}