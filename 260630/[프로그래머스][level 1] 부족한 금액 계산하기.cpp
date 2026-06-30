using namespace std;

long long solution(int price, int money, int count)
{
    long long need = 0;
    for (int i = 1; i<=count; i++) need+=i*price;
    return need-money > 0 ? need-money : 0;
}