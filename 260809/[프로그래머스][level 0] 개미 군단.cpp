#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    vector<int> v = {5,3,1};
    for (int i = 0; i<v.size(); i++){
        answer+=hp/v[i];
        hp%=v[i];
    }
    return answer;
}