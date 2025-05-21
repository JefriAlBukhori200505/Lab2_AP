#include<iostream>
using namespace std;

class contohakses{
    private:
        int privatevar;

    protected:
        int protectedvar;

    public:
        int publicvar;
        
        
        contohakses(){
            privatevar = 1;
            protectedvar = 2;
            publicvar = 3;
        }

    void tampilkansemua() {
        cout << " akses dari dalam class : " << endl;
        cout << privatevar << endl;
        cout << protectedvar << endl;
        cout << publicvar << endl;
    }
};
    // class turunan
    class turunan : public contohakses{
        public:
        void aksesprotected(){
            cout << " akses publicvar " << publicvar << endl;
            cout << " akses protectedvar " << protectedvar << endl;
             
        }
    };

int main() {
    contohakses obj;
    obj.tampilkansemua();

    cout << " akses dari luar class : " << endl;
    cout << obj.publicvar << endl;
    // cout << obj.privatevar << endl; // eror
    // cout << obj.protectedvar << endl; // eror

    turunan tur ;
    tur.aksesprotected();

}