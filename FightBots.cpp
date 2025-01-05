#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;
        
        string S;
        cin >> S;

        
        int aliceX = 0, aliceY = 0;

        
        int bobX = X, bobY = Y;

        bool bobWins = false;

        for (int i = 0; i < N; i++) {
            
            if (S[i] == 'R') aliceX++;
            else if (S[i] == 'L') aliceX--;
            else if (S[i] == 'U') aliceY++;
            else if (S[i] == 'D') aliceY--;

            
            if (bobX < aliceX) bobX++;
            else if (bobX > aliceX) bobX--;

            if (bobY < aliceY) bobY++;
            else if (bobY > aliceY) bobY--;

            
            if (bobX == aliceX && bobY == aliceY) {
                bobWins = true;
                break;
            }
        }

        if (bobWins) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
