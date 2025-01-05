#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    // Minimum possible value for the maximum element
    long long min_max_element = (k + n - 1) / n;

    cout << min_max_element << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
