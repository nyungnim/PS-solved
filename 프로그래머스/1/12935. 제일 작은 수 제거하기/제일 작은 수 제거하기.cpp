#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = *min_element(arr.begin(), arr.end());
    if(arr.size() == 1) {
        return {-1};
    }
    
    for(int num : arr) {
        if (num != min) {
            answer.push_back(num);
        }
    }
    return answer;
}