#include <iostream>

using namespace std;

int main() {
    // Variable Waktu
    long long detik,detik_awal,sisa_detik,akhir_detik,jam,menit,hari;
    // Input Untuk Detik Waktu
    cout << "Masukan Detik Waktu : ";cin>> detik;
    detik_awal = detik;

    // Konversi Detik Menjadi Waktu Jam + Hari
    if (detik > 1) {
        hari = detik / 86400;
        sisa_detik = detik %= 86400;
        jam = sisa_detik / 3600;
        sisa_detik = sisa_detik %= 3600;
        menit = sisa_detik /60;
        sisa_detik = sisa_detik %= 60;
        akhir_detik = sisa_detik;

        //  Output Dari Konversi
        cout << endl;
        cout << "========================================" << endl;
        cout << "       Konversi Dari : " << detik_awal << endl; 
        cout << "========================================" << endl;
        cout << hari << " HARI, "<<endl;
        cout << jam << " JAM, "<<endl;
        cout << menit << " MENIT, "<< endl;
        cout << akhir_detik << " DETIK." << endl;
        cout << "========================================" << endl;
    } else if( detik <= 1) {
        // Jika Data Tidak Sesuai
        cout << "Data Tidak Valid Brayy";
    }

    


    return 0;
}