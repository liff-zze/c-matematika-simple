#include <iostream>
#include <cstdlib> // Untuk rand dan srand
#include <ctime>   // Untuk time

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    int tebak;
    int jawaban = rand() % 100 + 1; 
    cout << "Tebak angka antara 1 dan 100: ";
    cin >> tebak;

    while (tebak != jawaban) {
        if (tebak < jawaban) {
            cout << "Tebakan Anda terlalu rendah.\n";
        } else { // tebak > jawaban
            cout << "Tebakan Anda terlalu tinggi.\n";
        }
        cout << "Coba lagi: ";
        cin >> tebak;
    }

    cout << "Tebakan Anda benar! Angka yang ditebak adalah " << jawaban << ".\n";

    return 0;
}

