#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int k1 = a / b;
    int k2 = b / a;
    cout << (k1 * a + k2 * b) / (k1 + k2) << endl;
    return 0;
}
