#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        string s;
        cin >> s; 

        string ans = "Yes";
        int length = s.length();

        int r = sqrt(length);
        if (r * r != length) {
            ans = "No";
        } else {
            string top_bottom_row(r, '1');         
            string middle_row = "1" + string(r - 2, '0') + "1"; 

            for (int i = 0; i < length; i += r) {
                string line = s.substr(i, r); 

                if (i == 0 || i == length - r) {
                    if (line != top_bottom_row) {
                        ans = "No";
                        break;
                    }
                } else {
                    if (line != middle_row) {
                        ans = "No";
                        break;
                    }
                }
            }
        }
        cout << ans << endl; 
    }

    return 0;
}
