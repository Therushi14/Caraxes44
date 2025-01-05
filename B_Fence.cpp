#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define nl '\n'
const int INF = INT_MAX;

int32_t main() {
    fastio();
    
    auto solve = [&] () {
        ll n, k;
        cin >> n >> k;
        vector<int> v(n+1);
        
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        
        
        vector<int> pre(n+1, 0);
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i-1] + v[i];
        }
        

        int sum = INF;
        int idx = -1;
        
        for (int i = 1; i <= n - k + 1; i++) {
            int j = i + k - 1;
            int nsum = pre[j] - pre[i-1];
            
            if (nsum < sum) {
                sum = nsum;
                idx = i;
            }
        }

        cout << idx << nl;
    };

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
