    #include<bits/stdc++.h>

    using namespace std;

    void solve() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = n - 1;
        for (int i = 1; i + 1 < n; ++i) {
            if (s[i - 1] == s[i + 1]) {
                res--;
            }
        }
        cout << res << '\n';
    }

    int main() {
        int t;
        cin >> t;
        for (int i = 0; i < t; ++i) {
            solve();
        }
    }