#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int32_t main() {
    fastio();
    
    auto solve = [&]() {
        ll n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &it : v) cin >> it;

        vector<pair<ll, ll>> arr;
        for (int i = 31; i >= 0; i--) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (v[j] & (1 << i)) cnt++;
            }

            ll contributions = (1LL << i) * cnt;
            arr.push_back({contributions, i});
        }

      
        sort(arr.begin(), arr.end(), [](pair<ll, ll>& p1, pair<ll, ll>& p2) {
            if (p1.first != p2.first) {
                return p1.first > p2.first;
            } else {
                return p1.second < p2.second;
            }
        });

        ll ans = 0;
        for (int i = 0; i < k; i++) {
            ans |= (1LL << arr[i].second);
        }

        cout << ans << nl;
    };
    
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
