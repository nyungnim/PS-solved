#include <string>
#include <cmath>

using namespace std;

int solution(int n) {
    string str = "";
    while(n>0) {
        str += to_string(n % 3);
        n /= 3;
    }
    
    int result = 0;
    int power = 0;
    for (int i = str.size() - 1; i>=0; i--) {
        result += (str[i] - '0') * pow(3,power++);
    }
    
    return result;
}