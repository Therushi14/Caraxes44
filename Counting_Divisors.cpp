#include <iostream>
#include <vector>
using namespace std;

const int MAX_X = 1e6 + 1;

int main() {
    int n;
    cin >> n;

    vector<int> divisor_count(MAX_X, 0);

    
    for (int i = 1; i < MAX_X; ++i) {
        for (int j = i; j < MAX_X; j += i) {
            divisor_count[j]++;
        }
    }

    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cout << divisor_count[x] << '\n';
    }

    return 0;
}
