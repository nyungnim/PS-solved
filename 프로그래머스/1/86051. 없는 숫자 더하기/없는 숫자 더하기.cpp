#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    for(int num : numbers) {
        answer -= num;
    }
    return answer;
}