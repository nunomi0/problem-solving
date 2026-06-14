#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    int l = 0;
    int r = people.size()-1;
    int cnt=0;
    while (l<=r){
        if (people[l]+people[r--]<=limit) l++;
        cnt++;
    }
    return cnt;
}