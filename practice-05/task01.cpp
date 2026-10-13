#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    int day = 1;
    while (x < y) {
        x *= 1.1;
        day++;
    }
    cout << day << endl;
    return 0;
}
