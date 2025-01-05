#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1000001;

int main() {
    ios::sync_with_stdio(0);  
    cin.tie(0);               

    vector<long long> sum_of_divisors(MAX_N, 0);

    for (int i = 1; i < MAX_N; ++i) {
        for (int j = 2 * i; j < MAX_N; j += i) {  
            sum_of_divisors[j] += i;
        }
    }

    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
         if (sum_of_divisors[n] > n) {
            cout << "abundant\n";  
        } else if (sum_of_divisors[n] < n) {
            cout << "deficient\n";
        } else {
            cout << "perfect\n";
        }
    }

    return 0;
}
