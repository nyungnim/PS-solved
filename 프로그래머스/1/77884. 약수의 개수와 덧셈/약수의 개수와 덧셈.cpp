#include <cmath>

using namespace std;

int cntNums(int n) {
    int cnt = 0;
    for(int i=1; i<= sqrt(n); i++) {
        if(n%i == 0) {
            cnt++;
            if(i != n / i) {
                cnt++;
            }
        }
    }
    return cnt;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i=left; i<= right; i++) {
        int nums = cntNums(i);
        if(nums % 2 == 0) {
            answer += i;
        } else {
            answer -= i;
        }
    }
    return answer;
}