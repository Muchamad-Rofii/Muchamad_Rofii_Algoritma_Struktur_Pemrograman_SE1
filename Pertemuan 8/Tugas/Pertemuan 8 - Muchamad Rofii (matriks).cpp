#include <iostream>
using namespace std;

int main() {
    int baris, kolom, a, b;

    cout << "Program Perhitungan Matriks" << endl;
    cout << "Masukkan Jumlah Baris: ";
    cin >> baris;
    cout << "Masukkan Jumlah Kolom: ";
    cin >> kolom;

    int MatriksA[baris][kolom], MatriksB[baris][kolom];

    cout << "\nMatriks A:" << endl;
    for (a = 0; a < baris; a++) {
        for (b = 0; b < kolom; b++) {
            cout << "Matriks A[" << a << "][" << b << "]: ";
            cin >> MatriksA[a][b];
        }
    }

    cout << "\nMatriks B:" << endl;
    for (a = 0; a < baris; a++) {
        for (b = 0; b < kolom; b++) {
            cout << "Matriks B[" << a << "][" << b << "]: ";
            cin >> MatriksB[a][b];
        }
    }

    cout << "\nHasil Jumlah Antar Matriks A dengan Matriks B : " << endl;
for (a = 0; a < baris; a++) {
    for (b = 0; b < kolom; b++) {
        cout << MatriksA[a][b] + MatriksB[a][b] << "\t";
    }
    cout << endl;
}

cout << "\nHasil Kurang Antar Matriks A dengan Matriks B : " << endl;
for (a = 0; a < baris; a++) {
    for (b = 0; b < kolom; b++) {
        cout << MatriksA[a][b] - MatriksB[a][b] << "\t";
    }
    cout << endl;
}

cout << "\nHasil Kali Antar Matriks A dengan Matriks B : " << endl;
for (a = 0; a < baris; a++) {
    for (b = 0; b < kolom; b++) {
        cout << MatriksA[a][b] * MatriksB[a][b] << "\t";
    }
    cout << endl;
}
}
