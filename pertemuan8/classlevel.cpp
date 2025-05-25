#include<iostream>
using namespace std;

class contohakses{ // deklarasi class utama
    private: // hanya bisa diakses dari dalam class ini sendiri
        int privatevar;

    protected: // bisa diakses dari dalam class ini dan class turunannya
        int protectedvar;

    public: // bisa diakses dari mana saja
        int publicvar;
        
        // constructor: untuk menginisialisasi nilai
        contohakses(){
            privatevar = 1;
            protectedvar = 2;
            publicvar = 3;
        }

    void tampilkansemua() { // untuk menampilkan semua variabel dari dalam class
        cout << " akses dari dalam class : " << endl;
        cout << privatevar << endl;
        cout << protectedvar << endl;
        cout << publicvar << endl;
    }
};
    // class turunan, class turunan dari contohakses
    class turunan : public contohakses{
        public:
        void aksesprotected(){ // class turunan untuk mengakses variabel protected dan public
            cout << " akses publicvar " << publicvar << endl;
            cout << " akses protectedvar " << protectedvar << endl;
             
        }
    };

int main() {
    contohakses obj; // membuat objek dari class contohakses
    obj.tampilkansemua(); // akses method public dari class

    cout << " akses dari luar class : " << endl;
    cout << obj.publicvar << endl;
    // cout << obj.privatevar << endl; // eror
    // cout << obj.protectedvar << endl; // eror

    turunan tur ; / membuat objek dari class turunan
    tur.aksesprotected(); // bisa akses public dan protected, tapi bukan private

}
