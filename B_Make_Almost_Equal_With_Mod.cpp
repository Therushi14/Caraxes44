#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;  
    
    while (t--) {
        int n;
        cin >> n;  
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        long long k = 1;
        for (int j = 1; j <= 57; j++) {
            k = 1LL << j;  
            set<int> distinct_values;
            
            for (int i = 0; i < n; i++) {
                distinct_values.insert(a[i] % k);
            }
            
            if (distinct_values.size() == 2) {
                cout << k << '\n';
                break;
            }
        }
    }
    
    return 0;
}
