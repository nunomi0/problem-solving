#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

bool visited[10];
int arr[10];
set<int> s;


void recur(int cnt, string &numbers){
    int num=0;
    for (int i = 0; i<cnt; i++){
        num*=10;
        num+=arr[i];
    }
    s.insert(num);
    
    if (cnt==numbers.length()) return;
    
    for (int i = 0; i<numbers.length(); i++){
        if (!visited[i]) {
            arr[cnt]=numbers[i]-'0';
            visited[i]=true;
            recur(cnt+1,numbers);
            visited[i]=false;
        }
    }
}

bool check(int num){
    if (num<=1) return false;
    for (int i = 2; i*i<=num; i++){
        if (num%i==0) return false;
    }
    return true;
}

int solution(string numbers) {
    recur(0,numbers);
    int answer=0;
    for (auto iter = s.begin(); iter!=s.end(); iter++) answer+=check(*iter);
    return answer;
}