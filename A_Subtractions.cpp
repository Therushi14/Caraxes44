#include <iostream>
#include <vector>
using namespace std;

long long operationsCount(long long a, long long b) {
    long long count = 0;
    while (a > 0 && b > 0) {
        long long larger = max(a, b);
        long long smaller = min(a, b);
        count += larger / smaller;
        larger %= smaller;
        a = larger;
        b = smaller;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<long long> results;
    for (int i = 0; i < n; ++i) {
        long long a, b;
        cin >> a >> b;
        results.push_back(operationsCount(a, b));
    }

    for ( auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
