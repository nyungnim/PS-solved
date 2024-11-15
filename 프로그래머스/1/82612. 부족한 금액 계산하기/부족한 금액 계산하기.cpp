using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    for(int i=1; i<=count; i++) {
        answer += price * i;
    }
    
    long long less = answer - money;

    return (less > 0) ? less : 0;
}