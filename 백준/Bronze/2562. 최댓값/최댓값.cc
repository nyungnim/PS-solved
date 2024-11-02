#include <iostream>
using namespace std;

int main()
{    
    int max_num = -1;
    int max_idx;
    int num[9];
    for(int i=0; i<9; i++) {
        cin >> num[i];
        if (max_num < num[i]) {
            max_num = num[i];
            max_idx = i;
        }
    }
    cout << max_num << '\n';
    cout << max_idx+1 << '\n';
}