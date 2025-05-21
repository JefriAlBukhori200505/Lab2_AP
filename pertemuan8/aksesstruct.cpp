#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string nama;
    int umur;
    float ipk;
};

int main() {

    mahasiswa mhs1;

    mhs1.nama = "Jefri";
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    // cout << " nama = " << mhs1.nama << endl;
    // cout << " umur = " << mhs1.umur << endl;
    // cout << " ipk = " << mhs1.ipk << endl;

    mahasiswa *ptrmhs = &mhs1;
    cout << " nama = " << ptrmhs->nama << endl;
    cout << " umur = " << ptrmhs->umur << endl;
    cout << " ipk = " << ptrmhs->ipk << endl;
}