#include <string>
#include <vector>
#include <iostream>

using namespace std;

int euclidean(int a, int b){
    return b? euclidean(b,a%b):a;
}

vector<int> solution(int n, int m) {
    int g = euclidean(n,m);
    int l = n/g*m;
    return {g,l};
}