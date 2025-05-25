#include <iostream>
using namespace std;

int main() {
    system("CLS"); // membersihkan layar
    
    // penjumlahan matrix 2*2

    int matriks1[2][2]; // matriks pertama
    int matriks2[2][2]; // matriks kedua
    int hasil[2][2]; // matriks untuk menyimpan hasil penjumlahan

    // input elemen matriks pertama
    cout << "matriks 1" << endl;
    for (int i = 0; i < 2; i++) { // loop baris
        for (int j = 0; j < 2; j++){ // loop kolom
            cout << "masukan elemen baris " << i + 1 << " kolom " << j + 1 << ": ";
            cin >> matriks1[i][j];
        }
    }

    // input elemen matriks kedua
    cout << "matriks 2" << endl;
    for (int i = 0; i < 2; i++) { // loop baris
        for (int j = 0; j < 2; j++){ // loop kolom
            cout << "masukan elemen baris " << i + 1 << " kolom " << j + 1 << ": ";
            cin >> matriks2[i][j];
        }
    }

    // output hasil penjumlahan matriks1 + matriks2
    cout << "hasil penjumlahan" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // penjumlahan elemen
            cout << hasil[i][j] << " "; 
        }
        cout << endl;
    }
}
