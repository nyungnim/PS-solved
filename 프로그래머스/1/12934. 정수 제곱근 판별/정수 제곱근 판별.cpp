#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long sqrt_n = static_cast<long long>(sqrt(n));
    if (sqrt_n * sqrt_n == n) {
        return (sqrt_n + 1) * (sqrt_n + 1);
    } else {
        return -1;
    }
}