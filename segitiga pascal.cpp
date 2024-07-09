#include <iostream>
using namespace std;

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

void printPascalTriangle(int n) {
    for (int line = 0; line < n; line++) {
        // Print leading spaces
        for (int i = 0; i < n - line - 1; i++) {
            cout << " ";
        }
        
        for (int i = 0; i <= line; i++) {
            cout << binomialCoefficient(line, i) << " ";
        }
        
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah baris untuk Segitiga Pascal: ";
    cin >> n;
    
    printPascalTriangle(n);

    return 0;
}

