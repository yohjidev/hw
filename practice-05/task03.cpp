#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    bool found = true;
    while (found) {
        found = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                int j = i;
                while (j < n && a[j] == a[i]) {
                    j++;
                }
                int len = j - i;
                ans += len;
                for (int k = j; k < n; k++) {
                    a[k - len] = a[k];
                }
                n -= len;
                found = true;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
