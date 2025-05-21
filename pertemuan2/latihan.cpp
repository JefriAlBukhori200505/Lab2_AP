#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = 3.14;
    double radius, volume, permukaan;

    cout << "Masukkan jari-jari bola: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    permukaan = 4 * PI * pow(radius, 2);

    cout << "Volume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << permukaan << endl;
    return 0;
}