#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    unordered_set<int> oddSquares;
    for (int k = 1; k * k <= 100 * 1000; k += 2) {
        oddSquares.insert(k * k);
    }

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int happyDays = 0;
        int currentSum = 0;

        for (int pieces : a) {
            currentSum += pieces;
            if (oddSquares.count(currentSum)) {
                ++happyDays;
            }
        }

        cout << happyDays << endl;
    }

    return 0;
}
