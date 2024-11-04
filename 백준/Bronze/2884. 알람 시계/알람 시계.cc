#include <iostream>

using namespace std;

int main() {
    int h, m, hm;
    cin >> h >> m;
    hm = h*60 + m;
    hm -= 45;
    if(hm <0) hm += 24*60;
    cout << hm / 60 << " ";
    cout << hm % 60;
    return 0;
}