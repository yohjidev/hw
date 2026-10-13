#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a > b) {
        if (a % 2 == 0 && a / 2 >= b) {
            cout << ":2" << endl;
            a /= 2;
        } else {
            cout << "-1" << endl;
            a -= 1;
        }
    }
    return 0;
}
