#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        vector<int> v(16);
        for (int i = 0; i < 16; i++) {
            cin >> v[i];  // Read the 16 integers
        }

        // Find the maximum and minimum values in the array
        int maxi = *max_element(v.begin(), v.end());
        int mini = *min_element(v.begin(), v.end());

        // Map to store the category of each number
        map<int, int> mp;
        mp[maxi] = 4;
        mp[mini] = 0;

        // Create a copy of the original array and sort it
        vector<int> v1 = v;
        sort(v1.begin(), v1.end());

        // Assign categories to the values based on their sorted positions
        for (int i = 0; i < 16; i++) {
            if (v1[i] == maxi || v1[i] == mini) {
                continue; // Skip if already assigned to 0 or 4
            } else if (i >= 1 && i <= 3) {
                mp[v1[i]] = 1;
            } else if (i >= 4 && i <= 7) {
                mp[v1[i]] = 2;
            } else if (i >= 8 && i <= 14) {
                mp[v1[i]] = 3;
            }
        }

        // Create the result array based on the mapping
        vector<int> ans;
        for (auto i : v) {
            ans.push_back(mp[i]);
        }

        // Print the result
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
}
