#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{ // membuat struktur data 'mahasiswa'
    string nama; // menyimpan nama mahasiswa
    int umur; // menyimpan umur mahasiswa
    float ipk; // menyimpan IPK mahasiswa
};

int main() {

    mahasiswa mhs1; // membuat variabel struct bertipe 'mahasiswa'

    mhs1.nama = "Jefri"; // mengisi nama
    mhs1.umur = 20; // mengisi umur
    mhs1.ipk = 4.00; // mengisi ipk

    // cout << " nama = " << mhs1.nama << endl;
    // cout << " umur = " << mhs1.umur << endl;
    // cout << " ipk = " << mhs1.ipk << endl;

    mahasiswa *ptrmhs = &mhs1; // membuat pointer ke struct mahasiswa dan menunjuk ke mhs1
    cout << " nama = " << ptrmhs->nama << endl;
    cout << " umur = " << ptrmhs->umur << endl;
    cout << " ipk = " << ptrmhs->ipk << endl;
}
