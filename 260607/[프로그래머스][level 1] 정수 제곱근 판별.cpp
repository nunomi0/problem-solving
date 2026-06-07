#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long x = pow(n,0.5);
    if (pow(x,2)==n) return pow(x+1,2);
    else return -1;
}