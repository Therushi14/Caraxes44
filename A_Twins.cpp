#include<bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n;
    
    vector<int> coins(n);
    int total_sum = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        total_sum += coins[i];
    }
    
    sort(coins.rbegin(), coins.rend());
    
    int taken_sum = 0, coins_taken = 0;
    for (int i = 0; i < n; ++i) {
        taken_sum += coins[i];
        coins_taken++;
        if (taken_sum > total_sum - taken_sum) {
            break;
        }
    }
    
    cout << coins_taken << endl;
    
    return 0;
}
