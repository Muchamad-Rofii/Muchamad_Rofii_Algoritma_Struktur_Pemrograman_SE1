#include <iostream>
using namespace std;

int main() {
    const float pajak = 0.1;
    
    const int harga_satuan[3] = {2500, 2000, 1500};
    const char kode[3] = {'D', 'P', 'S'};
    const string jenis[3] = {"Dada", "Paha", "Sayap"};

    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "---------------------\n";
    cout << "Kode\tJenis\tHarga\n";
    cout << "-------------------------------\n";
    
    for (int i = 0; i < 3; i++) {
        cout << " " << kode[i] << '\t' << jenis[i] << '\t' << "Rp. " << harga_satuan[i] << '\n';
    }
    cout << "-------------------------------\n";

    int banyak_jenis;
    
    cout << "Banyak Jenis : ";
    cin >> banyak_jenis;

    char jenis_pembelian[banyak_jenis];
    int banyak_potong[banyak_jenis];

    for (int i = 0; i < banyak_jenis; i++) {
        char jenis_potong;
        bool valid = true;

        while (valid) {
            cout << "\nJenis Ke - " << i + 1 << '\n';
            cout << "Jenis Potong [D/P/S] : ";
            cin >> jenis_potong;

            switch (jenis_potong) {
                case 'D':
                case 'd':
                    jenis_pembelian[i] = 'D';
                    valid = false;
                    break;
                case 'P':
                case 'p':
                    jenis_pembelian[i] = 'P';
                    valid = false;
                    break;
                case 'S':
                case 's':
                    jenis_pembelian[i] = 'S';
                    valid = false;
                    break;
                default:
                    cout << "Kode yang Anda masukan invalid. Silakan coba lagi.\n";
                    break;
            }
        }

        cout << "Banyak Potong : ";
        cin >> banyak_potong[i];
    }

    int total_banyak_potong[3] = {0, 0, 0};
    int total_harga_berdasarkan_jenis[3] = {0, 0, 0};
    int total_bayar_tanpa_pajak = 0;

    for (int i = 0; i < banyak_jenis; i++) {
        if (jenis_pembelian[i] == 'D') {
            total_banyak_potong[0] += banyak_potong[i];
        } else if (jenis_pembelian[i] == 'P') {
            total_banyak_potong[1] += banyak_potong[i];
        } else if (jenis_pembelian[i] == 'S') {
            total_banyak_potong[2] += banyak_potong[i];
        }
    }

    for (int i = 0; i < 3; i++) {
        total_harga_berdasarkan_jenis[i] = total_banyak_potong[i] * harga_satuan[i];
        total_bayar_tanpa_pajak += total_harga_berdasarkan_jenis[i];
    }

    float harga_pajak = total_bayar_tanpa_pajak * pajak;
    float total_bayar_pake_pajak = total_bayar_tanpa_pajak + harga_pajak;


    cout << "----------------------------------------------------------\n";
    cout << "\t\tGEROBAK FRIED CHICKEN\n";
    cout << "----------------------------------------------------------\n";
    cout << "No.\tJenis\t\tHarga\tBanyak\tJumlah\n";
    cout << "\tPotong\t\tSatuan\tBeli\tHarga\n";
    cout << "----------------------------------------------------------\n";

    for (int i = 0; i < banyak_jenis; i++) {
        if (total_banyak_potong[i] > 0) {
            cout << (i + 1) << ".\t" << jenis[i] << "\t\tRp. " << harga_satuan[i] << "\t" << total_banyak_potong[i] << "\tRp. " << total_harga_berdasarkan_jenis[i] << '\n';
        }
    }

    cout << "----------------------------------------------------------\n";
    cout << "\t\t\tJumlah Bayar\tRp. " << total_bayar_tanpa_pajak << '\n';
    cout << "\t\t\tPajak 10%\tRp. " << harga_pajak << '\n';
    cout << "\t\t\tTotal Bayar\tRp. " << total_bayar_pake_pajak << '\n';
    cout << "----------------------------------------------------------\n";

    return 0;
}
