#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve() {
    long long n;
    int k;
    cin >> n >> k;

    vector<long long> factors;

    
    for (long long i = 2; i <= sqrt(n); ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }

    
    if (factors.size() < k) {
        cout << -1 << endl;
        return;
    }

   
    while (factors.size() > k) {
        long long last = factors.back();
        factors.pop_back();
        factors.back() *= last;
    }

    for (auto factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
