#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    set<int> s;
    int n = elements.size();
    
    for (int i = 0; i<n; i++){
        int cur = 0;
        for (int j = 0; j<n; j++){
            cur+=elements[(i+j)%n];
            s.insert(cur);
        }
    }
    
    return s.size();
}