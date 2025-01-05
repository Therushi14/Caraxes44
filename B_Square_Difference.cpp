#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int32_t main() {
    fastio();
    
    auto solve = [&]() {
        ll a, b;
        cin >> a >> b;
        ll t1 = a - b;
        ll t2 = a + b;
        if (t1 == 1 && isPrime(t2)) {
            py;
        } else {
            pn;
        }
    };

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
