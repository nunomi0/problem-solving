#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int solution(vector<int> elements) {
    set<int> s;
    
    for (int i = 1; i<=elements.size(); i++){
        int cur = 0;
        for (int j = 0; j<i; j++) cur+=elements[j];
        for (int j = 0; j<elements.size(); j++){
            s.insert(cur);
            cur-=elements[j];
            cur+=elements[(i+j)%elements.size()];
        }
    }
    
    return s.size();
}