#include <iostream>
using namespace std;

int main()
{
    int max_num = -1;
    int max_idx;
    int num;
    
    for(int i=0; i<9; i++) {
        cin >> num;
        if(max_num < num) {
            max_num = num;
            max_idx = i;
        }
    }
    cout << max_num << '\n';
    cout << max_idx + 1<< '\n';
}