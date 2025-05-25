#include <iostream>
using namespace std;

void penjumlahan(int a, int b){ // fungsi biasa tanpa pointer: hanya menjumlahkan dan mencetak
    cout << a + b << endl;
}

void penjumlahanpointer(int *a, int *b){ // fungsi dengan pointer: menjumlahkan dan menyimpan hasil ke variabel pertama
    *a += *b;
    cout << *a << endl;
}

int main() {
    system("CLS");

    // pointer declaration, menunjuk ke alamat variabel biasa
    int number = 35;
    int *pointer_number = &number; // pointer menunjuk ke address number

    // cout << " isi variabel number = " << number << endl;
    // cout << " alamat dari memori variabel number = " << &number << endl;
    // cout << " isi variabel pointer_number = " << pointer_number << endl;
    // cout << " isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << " alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    //pointer opration
    //*pointer_number = 25;
    // cout << " isi variabel number = " << number << endl;
    // cout << " alamat dari memori variabel number = " << &number << endl;
    // cout << " isi variabel pointer_number = " << pointer_number << endl;
    // cout << " isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << " alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    //pointer in array, akses elemen array melalui pointer
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num; // array otomatis jadi pointer ke elemen pertama
    // cout << " isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << " alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    // *pointer_num += 5;
    // cout << " isi variabel number = " << number << endl;
    // cout << " alamat dari memori variabel number = " << &number << endl;
    // cout << " isi variabel pointer_number = " << pointer_number << endl;
    // cout << " isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << " alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    // pointer in parameter, menunjukkan bahwa fungsi bisa mengubah nilai variabel asli
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanpointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;

    //pointer in pointer, menyimpan alamat dari pointer lain
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score; //pointer in pointer
    // cout << " isi variabel score = " << score << " dan alamat memorinya " << &score << endl;
    // cout << " isi variabel ptr_pointer_score " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;

    //dynamic pointer, new untuk alokasi dan delete untuk dealokasi
    int *ptr = new int; // alokasi memori baru di heap
    *ptr = 30; // assign nilai ke alamat baru
    cout << " isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    delete ptr; // menghapus memori yang dialokasikan
    cout << " isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;
}
