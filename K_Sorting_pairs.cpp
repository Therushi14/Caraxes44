#include <bits/stdc++.h>
using namespace std;


bool cmp(const pair<string, long long>& p1, const pair<string, long long>& p2) {
    return p1.second > p2.second;
}

int main() {
    vector<pair<string, long long>> v;
    long long n;
    cin >> n;

    
    for (long long i = 0; i < n; ++i) {
        string s;
        long long x;
        cin >> s >> x;
        v.emplace_back(s, x);
    }

    
    sort(v.begin(), v.end(), cmp);

    
    for (const auto& i : v) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
