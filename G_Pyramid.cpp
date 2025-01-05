#include <iostream>
using namespace std;


void printSpaces(int count) {
    if (count == 0) {
        return;
    }
    cout << " ";
    printSpaces(count - 1);
}

void printAsterisks(int count) {
    if (count == 0) {
        return;
    }
    cout << "*";
    printAsterisks(count - 1);
}


void printPyramid(int n, int currentRow) {
    if (currentRow > n) {
        return;
    }
    printSpaces(n - currentRow);
    printAsterisks(2 * currentRow - 1);
    cout << endl;
    printPyramid(n, currentRow + 1);
}

int main() {
    int N;
    cin >> N;
    printPyramid(N, 1);
    return 0;
}
