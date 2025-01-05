#include <iostream>
using namespace std;

// Function to calculate XOR from 0 to n-1
int xorTill(int n) {
    if (n % 4 == 0) return n - 1;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n;
    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int baseXor = xorTill(a);

        if (baseXor == b) {
            cout << a << endl;
        } else if ((baseXor ^ b) == a) {
            cout << a + 2 << endl;
        } else {
            cout << a + 1 << endl;
        }
    }

    return 0;
}
