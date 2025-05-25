#include <iostream>
#include <vector> // untuk menggunakan tipe data vector
using namespace std;

int main () {
    // Vector Declaration & Initialization
    vector<string> nama_karyawan = {"nolan", "julian", "lukas", "lancelot"}; // // Deklarasi dan inisialisasi vector string bernama nama_karyawan

    // Ascending Element of Vector, menampilkan hasil dari awal ke akhir
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // cara lain menampilkan isi vector menggunakan range-based for loop
    // for (string karyawan : nama_karyawan){
    //     cout << karyawan << endl;
    // }

    // Add data to vector, menambahkan data ke dalam vector
    // nama_karyawan.push_back("imam");
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete data from vector, menghapus data dari vektor
    // nama_karyawan.pop_back(); // menghapus elemen terakhir
    // nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus elemen ke-4 (index ke-3)
    
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    //}

}
