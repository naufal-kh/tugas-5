#include <iostream>
using namespace std;

// Fungsi menentukan bilangan
string cekBilangan(int angka) {
    if (angka % 2 == 0) {
        return "Genap";
    }
    else {
        return "Ganjil";
    }
}

int main() {
    int angka;

    cout << "===== CEK BILANGAN =====" << endl;
    cout << "Masukkan bilangan: ";
    cin >> angka;

    cout << "Bilangan " << angka
         << " adalah " << cekBilangan(angka) << endl;

    return 0;
}
