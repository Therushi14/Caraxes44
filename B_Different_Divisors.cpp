#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
vector<int> primes;


void sieve() {
    vector<bool> is_prime(MAXN + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAXN; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAXN; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        
        int p1 = *lower_bound(primes.begin(), primes.end(), d + 1);
        int p2 = *lower_bound(primes.begin(), primes.end(), p1 + d);
        cout << p1 * p2 << endl;
    }

    return 0;
}
