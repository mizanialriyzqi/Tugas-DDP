#include <iostream>

using namespace std;

int main() {
    // Variable Waktu
    long long detik,detik_awal,sisa_detik,akhir_detik;
    // Input Untuk Detik Waktu
    cout << "Masukan Detik Waktu : ";cin>> detik;
    detik_awal = detik;

    // Konversi Detik Menjadi Waktu Jam + Hari
    long long hari = detik / 86400;
    sisa_detik = detik &= 86400;
    long long jam = sisa_detik / 3600;
    sisa_detik = sisa_detik %= 3600;
    long long menit = sisa_detik / 60;
    sisa_detik = sisa_detik %= 60;
    akhir_detik = sisa_detik;

    // Output Dari Konversi
    cout << endl;
    cout << "========================================" << endl;
    cout << "       Konversi Dari " << detik_awal << endl; 
    cout << "========================================" << endl;
    cout << hari << "HARI, "<< jam << "JAM, " << menit << "MENIT, " << akhir_detik << "DETIK." << endl;
    cout << "========================================" << endl;
   

    return 0;
}