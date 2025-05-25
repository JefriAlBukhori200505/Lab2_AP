#include <iostream>
using namespace std;

void sapa(string nama) { // fungsi bernama 'sapa' yang menerima parameter string 
    cout << "Halo " << nama << " ! Selamat Datang di AP 2 !" << endl;
}

int main () {
    string namaPengguna = "Jefri"; // variabel namaPengguna dengan nilai "Jefri"

    sapa(namaPengguna); // memanggil fungsi 'sapa' dengan mengirimkan 'namaPengguna' sebagai argumen

    return 0;
}
