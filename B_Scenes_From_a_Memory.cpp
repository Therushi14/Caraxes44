#include <iostream>
#include <string>
using namespace std;


bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void solve() {
    int k;
    string n;
    cin >> k >> n;

    
    for (char digit : n) {
        int d = digit - '0';
        if (!is_prime(d)) {
            
            cout << 1 << endl;
            cout << d << endl;
            return;
        }
    }

    
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            int num = (n[i] - '0') * 10 + (n[j] - '0');
            if (!is_prime(num)) {
                
                cout << 2 << endl;
                cout << n[i] << n[j] << endl;
                return;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
