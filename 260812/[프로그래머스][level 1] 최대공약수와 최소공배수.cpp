#include <string>
#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b){
    while (true){
        if (a>b) swap(a,b);
        if (a==0) return b;
        
        int tmp=b-a;
        b=a;
        a=tmp;
    }
    return b;
}

int lcm(int a, int b, int g){
    return a/g*b;
}

vector<int> solution(int n, int m) {
    int g = gcd(n,m);
    int l = lcm(n,m,g);
    return {g,l};
}