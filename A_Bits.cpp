#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to compute f(L, R)
ll solve(ll L, ll R) {
    if (L == R) {
        return L;
    }

    // Find the largest b such that 2^b <= R
    ll b = 63 - __builtin_clzll(R); // Equivalent to floor(log2(R))

    if ((1LL << b) <= L) {
        // Case 1: Both L and R are in the same range offset by 2^b
        return solve(L - (1LL << b), R - (1LL << b)) + (1LL << b);
    } else if ((1LL << (b + 1)) - 1 <= R) {
        // Case 2: R >= 2^(b+1) - 1
        return (1LL << (b + 1)) - 1;
    } else {
        // Case 3: Return the number with all bits set up to b
        return (1LL << b) - 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        ll L, R;
        cin >> L >> R;
        cout << solve(L, R) << "\n";
    }

    return 0;
}
