#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; // Deklarasi variabel global

void namaVariabel() { //fungsi yang menggunakan variabel lokal dan global
    string namaLokal = "Komputer"; // variabel lokal hanya bisa diakses dalam fungsi ini

    // coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

int main () {
    namaVariabel(); // memanggil fungsi untuk menjalankan isi dari namaVariabel()

    // coba akses
    cout << namaGlobal << endl;

    // coba akses
    // cout << namaLokal << endl; // ERROR: namaLokal tidak dikenali di sini

}
