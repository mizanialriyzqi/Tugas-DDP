#include <iostream>
using namespace std;

double perjumlahan(double a, double b) {
    return a + b;
}
double pengurangan(double a, double b) {
    return a - b;
}
double perkalian(double a, double b) {
    return a * b;
}
double pembagian(double a, double b) {
    return a / b;
}
int moduluss(int a, int b) {
    return a % b;
}

int main() {
    char pilihan, lanjut;
    double a, b;

    do {
        cout << "=== Calculator Simple ===" << endl;
        cout << "1. Perjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Modulus" << endl;

        cout << "Pilih Menu (1-5) : ";
        cin >> pilihan;

        cout << "Masukan Nilai A : ";
        cin >> a;
        cout << "Masukan Nilai B : ";
        cin >> b;

        switch (pilihan) {
        case '1':
            cout << "Hasil : " << perjumlahan(a, b) << endl;
            break;
        case '2':
            cout << "Hasil : " << pengurangan(a, b) << endl;
            break;
        case '3':
            cout << "Hasil : " << perkalian(a, b) << endl;
            break;
        case '4':
            cout << "Hasil : " << pembagian(a, b) << endl;
            break;
        case '5':
            cout << "Hasil : " << moduluss(a, b) << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << "Apakah ingin melanjutkan? (Y/N): ";
        cin >> lanjut;

    } while (lanjut == 'Y' || lanjut == 'y');
    system("cls");

    return 0;
}
