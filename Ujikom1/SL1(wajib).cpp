#include <iostream>

using namespace std;

int main() {
    // Variable Waktu
    long long detik;
    cout << "Masukan Detik Waktu : ";cin>> detik;

    // Konversi Detik Menjadi Waktu Jam
    long long jam = detik / 3600;
    detik %= 3600;
    long long menit = detik / 60;
    detik %= 60;

    cout << jam << " Jam, " << menit << " Menit, " << detik << " Detik, "<< endl;

    return;
}
