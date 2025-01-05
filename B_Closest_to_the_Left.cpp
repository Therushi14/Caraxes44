#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxIndex(const vector<int>& arr, int value) {
    int left = 0, right = arr.size() - 1;
    int answer = 0; // Default to 0 if no element is found
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] <= value) {
            answer = mid + 1; // Convert 0-based index to 1-based
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return answer;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> queries(k);
    for (int i = 0; i < k; i++) {
        cin >> queries[i];
    }

    for (int i = 0; i < k; i++) {
        cout << findMaxIndex(arr, queries[i]) << endl;
    }

    return 0;
}
