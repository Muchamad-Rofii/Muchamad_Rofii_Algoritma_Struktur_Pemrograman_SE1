#include <iostream>
using namespace std;

int main()
{
	
	int nilai_a, nilai_b, nilai_c;
	
	string nama_siswa;
	
	cout<< "Program Penghitung Nilai Rata-Rata Menggunakan If Else" <<endl;
	cout<< "Nama Siswa : ";
	getline(cin,nama_siswa);
	cout<< "Nilai Pertandingan 1 = ";
	cin>> nilai_a;
	cout<< "Nilai Pertandingan 2 = ";
	cin>> nilai_b;
	cout<< "Nilai Pertandingan 3 = ";
	cin>> nilai_c;
	
	double total = (nilai_a + nilai_b + nilai_c)/3;
	cout<< "siswa yang bernama "<<nama_siswa<<endl;
	cout<< "Memperoleh nilai rata-rata "<<total<<" dari hasil perlombaan diikutinya "<<endl;
	
	if (total>=85)
	{
		cout<<"maka mendapat hadiah komputer core i5";
	}
	else if (total>=70)
	{
		cout<<"maka mendapat hadiah uang sebesar Rp2.5000,000";
	}
	else 
	{
		cout<<"maka mendapat hadiah hiburan";
	}
	getchar ();
}
