#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Untuk std::setprecision()

using namespace std;

// Kelas untuk merepresentasikan data mahasiswa
class Mahasiswa {
private:
    string nama;
    int nilai;

public:
    // Konstruktor untuk inisialisasi objek Mahasiswa
    Mahasiswa(string nama, int nilai) : nama(nama), nilai(nilai) {}

    // Fungsi untuk mendapatkan nama mahasiswa
    string getNama() const {
        return nama;
    }

    // Fungsi untuk mendapatkan nilai mahasiswa
    int getNilai() const {
        return nilai;
    }
};

// Fungsi untuk menambahkan data mahasiswa ke dalam vektor
void tambahMahasiswa(vector<Mahasiswa>& daftarMahasiswa) {
    string nama;
    int nilai;

    cout << "Masukkan nama mahasiswa: ";
    cin >> nama;
    cout << "Masukkan nilai mahasiswa: ";
    cin >> nilai;

    Mahasiswa mhs(nama, nilai);
    daftarMahasiswa.push_back(mhs);

    cout << "Data mahasiswa berhasil ditambahkan." << endl;
}

// Fungsi untuk menampilkan daftar mahasiswa beserta nilai mereka
void tampilkanMahasiswa(const vector<Mahasiswa>& daftarMahasiswa) {
    if (daftarMahasiswa.empty()) {
        cout << "Belum ada data mahasiswa." << endl;
        return;
    }

    cout << "Daftar Mahasiswa:" << endl;
    cout << "-----------------" << endl;
    for (const auto & mhs :daftarMahasiswa) {
        cout << "Nama: " << mhs.getNama() << ", Nilai: " << mhs.getNilai() << endl;
    }
}

// Fungsi untuk menghitung rata-rata nilai mahasiswa
void hitungRataRata(const vector<Mahasiswa>& daftarMahasiswa) {
    if (daftarMahasiswa.empty()) {
        cout << "Belum ada data mahasiswa untuk dihitung rata-ratanya." << endl;
        return;
    }

    int totalNilai = 0;
    for (const auto& mhs : daftarMahasiswa) {
        totalNilai += mhs.getNilai();
    }

    double rataRata = static_cast<double>(totalNilai) / daftarMahasiswa.size();
    cout << "Rata-rata nilai mahasiswa: " << fixed << setprecision(2) << rataRata << endl;
}

// Fungsi utama
int main() {
    vector<Mahasiswa> daftarMahasiswa;
    int pilihan;

    do {
        cout << "\nMenu:";
        cout << "\n1. Tambah Mahasiswa";
        cout << "\n2. Tampilkan Daftar Mahasiswa";
        cout << "\n3. Hitung Rata-rata Nilai Mahasiswa";
        cout << "\n4. Keluar";
        cout << "\nPilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahMahasiswa(daftarMahasiswa);
                break;
            case 2:
                tampilkanMahasiswa(daftarMahasiswa);
                break;
            case 3:
                hitungRataRata(daftarMahasiswa);
                break;
            case 4:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (pilihan != 4);

    return 0;
}

