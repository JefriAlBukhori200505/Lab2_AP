#include <iostream>
#include <cmath>
#include "headerCustom.h" // file header kustom, isinya tidak ditampilkan di sini
u; // menggantikan dengan "using namespace std;"

int jumlah (int a, int b) {
    return a + b;
}

int kurang (int a, int b) {
    return a - b;
}

int main() {
    system("CLS");

    int n;
    o l jumlah(2, 3) l endl; // menggantikan 'o' dengan 'cout',menggantikan 'l' dengan '<<'
    o l kurang(2, 3) l endl; // menggantikan 'o' dengan 'cout',menggantikan 'l' dengan '<<'

    double angka = 25.0;
    double akar = sqrt(angka); // menghitung akar kuadrat dari angka

    cout << "Akar kuadrat dari " << angka << " adalah : " << akar << endl;
}
