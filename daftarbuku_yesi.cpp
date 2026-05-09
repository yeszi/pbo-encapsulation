#include <iostream>
#include <string>

using namespace std;

class Buku {
private:
    string judul;
    string pengarang;
    int tahunTerbit;
    int jumlahBuku;

public:
    Buku() {
        judul = "-";
        pengarang = "-";
        tahunTerbit = 0;
        jumlahBuku = 0;
    }


    void setJudul(string j) {
        judul = j;
    }

    void setPengarang(string p) {
        pengarang = p;
    }

    void setTahunTerbit(int t) {
        if (t >= 2022) {
            tahunTerbit = t;
        } else {
            cout << "Peringatan: Tahun " << t << " tidak valid! Hanya menerima buku keluaran baru (>= 2022)." << endl;
            tahunTerbit = 0;         }
    }

    void setJumlahBuku(int j) {
        if (j > 0) {
            jumlahBuku = j;
        } else {
            cout << "Peringatan: Jumlah " << j << " tidak valid! Harus di atas 0." << endl;
            jumlahBuku = 0; // Reset jika tidak valid
        }
    }

    void tampilkanInfo() {
        cout << "\n=== DETAIL BUKU ===" << endl;
        cout << "Judul Buku    : " << judul << endl;
        cout << "Pengarang     : " << pengarang << endl;
        cout << "Tahun Terbit  : " << (tahunTerbit == 0 ? "Data Tidak Valid" : to_string(tahunTerbit)) << endl;
        cout << "Jumlah Stok   : " << (jumlahBuku == 0 ? "Data Tidak Valid" : to_string(jumlahBuku)) << endl;
        cout << "=====================" << endl;
    }
};

int main() {
    Buku myBuku;
    string inputJudul, inputPengarang;
    int inputTahun, inputJumlah;

    cout << "Input Data Buku Perpus" << endl;
    
    cout << "Masukkan Judul Buku: ";
    getline(cin, inputJudul);
    myBuku.setJudul(inputJudul);

    cout << "Masukkan Pengarang: ";
    getline(cin, inputPengarang);
    myBuku.setPengarang(inputPengarang);

    cout << "Masukkan Tahun Terbit: ";
    cin >> inputTahun;
    myBuku.setTahunTerbit(inputTahun); 

    cout << "Masukkan Jumlah Buku: ";
    cin >> inputJumlah;
    myBuku.setJumlahBuku(inputJumlah);    

    myBuku.tampilkanInfo();

    return 0;
}