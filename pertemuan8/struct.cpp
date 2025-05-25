#include <iostream>
#include <vector>

using namespace std;


struct alamat { // struct untuk menyimpan informasi alamat
    string jalan; // variabel untuk menyimpan jalan
    string kota; // variabel untuk menyimpan kota
    int kodepos; // variabel untuk menyimpan kodepos
};

struct Mahasiswa{
    string nama; // variabel untuk menyimpan nama
    int umur; // variabel untuk menyimpan umur
    float ipk; // variabel untuk menyimpan ipk
    alamat alamat_mahasiswa; // ini pake struct yang di atas
};

int main(){
    Mahasiswa mhs1; // variabel mahasiswa dibuat menjadi mhs1
    // data awal (kalau mau langsung diisi tanpa input)
    mhs1.nama = "Jefri";
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    // mhs1.alamat_mahasiswa.jalan = "Jl.suka baru";
    // mhs1.alamat_mahasiswa.kota = "Medan";
    // mhs1.alamat_mahasiswa.kodepos = 200505;

    // cout << "Alamat : " << mhs1.alamat_mahasiswa.jalan << " Kota " << mhs1.alamat_mahasiswa.kota << " Kodepos " << mhs1.alamat_mahasiswa.kodepos << endl;

    vector<Mahasiswa> mahasiswa; // vektor buat nyimpen banyak data mahasiswa
    int n;
    cout << "Masukkan banyak mahasiswa : ";cin >> n;
    
    // input data mahasiswa
    for(int i = 0;i < n;i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cin.get(); // biar nggak lompat input
        cout << "Masukkan Nama : "; cin >>  mhs1.nama;
        cout << "Masukkan Umur : "; cin >> mhs1.umur;
        cout << "Masukkan ipk : "; cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1); // masukin ke vector
    }

    // nampilin data mahasiswa
    for(int i=0;i<n;i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }
}
