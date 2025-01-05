#include <iostream>
#include <vector>
#include <string>
using namespace std;

void toBinary(int N, std::string &result) {
    if (N == 0) {
        return;
    }
    
    toBinary(N / 2, result);
    
    result += (N % 2) + '0';
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        
        if (N == 0) {
            cout << "0" << endl;
            continue;
        }

        string result;
        toBinary(N, result);
        cout << result << endl;
    }

    return 0;
}
