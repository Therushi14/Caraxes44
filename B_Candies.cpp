#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "-1\n";  
        return;
    }

    vector<int> v;
    bool found = false;  

    for (int i = 29; i >= 1; i--) {
        if ((n >> i) & 1) {  
            found = true;
            v.push_back(2);  
        } else if (found) {
            v.push_back(1);  
        }
    }

    cout << v.size() << endl;

    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;  

    while (t--) {
        solve();  
    }

    return 0;
}
