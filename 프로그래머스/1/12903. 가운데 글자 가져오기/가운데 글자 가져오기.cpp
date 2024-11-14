#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int len = s.size();
    if (len % 2 == 1) {
        return s.substr(len/2, 1);
    } else {
        return s.substr(len/2-1,2);
    }
}