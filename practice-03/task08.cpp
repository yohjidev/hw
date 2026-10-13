#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int d1 = x / 1000;
    int d2 = (x / 100) % 10;
    int d3 = (x / 10) % 10;
    int d4 = x % 10;
    cout << (d1 - d4) * (d1 - d4) + (d2 - d3) * (d2 - d3) + 1 << endl;
    return 0;
}
