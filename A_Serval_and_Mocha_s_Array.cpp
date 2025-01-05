#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd
using namespace std;

// Function to check if a given permutation can make the array beautiful
bool canBeBeautiful(vector<int> &a) {
    // Sort the array to apply the greedy approach
    sort(a.begin(), a.end());
    
    int currentGCD = a[0];
    for (int i = 1; i < a.size(); ++i) {
        // Update the GCD with the current element
        currentGCD = gcd(currentGCD, a[i]);
        // Check if the currentGCD is greater than the length of the current prefix
        if (currentGCD > (i + 1)) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (canBeBeautiful(a)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
