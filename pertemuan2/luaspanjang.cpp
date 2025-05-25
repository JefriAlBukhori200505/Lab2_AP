#include <iostream> // header untuk cout/cin
using namespace std; // agar tidak perlu membuat std:: sebelum cout/cin

int main () {

    float luas, p, l; // variabel float untuk menampilkan p untuk panjang, l untuk lebar dan luas

    cout << "Masukkan panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> l;

    luas = p * l; // menghitung luas
    cout << "Luas = " << luas << endl;

    return 0; // mengembalikan nilai 0 sebagai tanda program selesai
}
