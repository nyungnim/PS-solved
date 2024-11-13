#include <string>

using namespace std;

bool solution(int x) {
    int ans = 0;
    int num = x;
    
    while(x > 0)
    {
        ans += x % 10;
        x /= 10;
    }
    return (num % ans == 0);
}