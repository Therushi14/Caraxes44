#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For gcd

using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    int maxi = gcd(A, B);
    vector<int> divisors;

    for (int i = 1; i * i <= maxi; ++i) {
        if (maxi % i == 0) {
            divisors.push_back(i);
            if (i != maxi / i) {
                divisors.push_back(maxi / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end(), greater<int>());

    cout << divisors[K-1] << endl;

    return 0;
}
