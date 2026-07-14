#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    stack<int> s;
    int answer = 0;
    int cur = 1;
    
    for (int i = 0; i<order.size(); i++){
        if (!s.empty() && s.top()==order[i]) { // 보조 컨테이너에 값이 있는 경우
            s.pop();
            answer++;
        }
        else {
            if (cur>order[i]) return i;
            while (cur<order[i]) s.push(cur++);
            cur++;
        }
    }
}