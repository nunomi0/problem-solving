#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{    
    return min(nums.size()/2, set<int>(nums.begin(), nums.end()).size());
}