#include <iostream>
using namespace std;

int main()
{
	int nilai_a, nilai_b, nilai_c,rata;
	
	string nama_siswa;
	
	cout<< "Program Penghitung Nilai Rata-Rata Menggunakan Nested If"<<endl;
	cout<< "\nNama Siswa : ";
	getline(cin,nama_siswa);
	cout<< "Nilai Pertandingan 1 = ";
	cin>> nilai_a;
	cout<< "Nilai Pertandingan 2 = ";
	cin>> nilai_b;
	cout<< "Nilai Pertandingan 3 = ";
	cin>> nilai_c;
	
	rata = (nilai_a + nilai_b + nilai_c)/3;
	cout<< "siswa yang bernama "<<nama_siswa<<endl;
	cout<< "Memperoleh nilai rata-rata "<<rata<<" dari hasil perlombaan diikutinya "<<endl;
	
	if (rata<70)
	{
		cout<<"maka mendapat hadiah hiburan";
	}
	else
	{
		if (rata>=85)
	{
		cout<<"maka mendapat hadiah komputer intel core i5";
	}
		else 
	{
		cout<<"maka mendapat hadiah uang sebesar Rp.2.500,000";
	}
	}
	getchar ();
}
