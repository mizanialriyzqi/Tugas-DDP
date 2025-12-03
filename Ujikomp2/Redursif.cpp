#include <iostream>
using namespace std;


int pangkat(int a, int b) {
    if (b == 0) {
        return 1; 
    } else {
        return a * pangkat(a, b - 1); 
    }
}

int main() {
    int a, b;
    char pilihan;

    do {
    cout << "Masukkan nilai A (bilangan pokok): ";
    cin >> a;
    cout << "Masukkan nilai B (pangkat): ";
    cin >> b;


    cout << "Hasil " << a << "^" << b << " = " << pangkat(a, b) << endl;
    cout << "Apakah Ingin Melanjutkan (Y/N) : ";cin >> pilihan;

} while(pilihan == 'Y' || pilihan == 'y');
system("cls");

    return 0;
}
