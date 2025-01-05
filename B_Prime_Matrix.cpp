#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100500;  

vector<bool> is_prime(MAXN, true);
vector<int> next_prime(MAXN);


void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAXN; ++i) {
        if (is_prime[i]) {
            for (int j = 2 * i; j < MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    
    int last_prime = MAXN - 1;
    for (int i = MAXN - 1; i >= 0; --i) {
        if (is_prime[i]) {
            last_prime = i;
        }
        next_prime[i] = last_prime;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();  

    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    
    vector<int> row_moves(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            row_moves[i] += next_prime[matrix[i][j]] - matrix[i][j];
        }
    }

    
    vector<int> col_moves(m, 0);
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            col_moves[j] += next_prime[matrix[i][j]] - matrix[i][j];
        }
    }

    
    int min_moves = INT_MAX;
    for (int i = 0; i < n; ++i) {
        min_moves = min(min_moves, row_moves[i]);
    }
    for (int j = 0; j < m; ++j) {
        min_moves = min(min_moves, col_moves[j]);
    }

    cout << min_moves << '\n';

    return 0;
}
