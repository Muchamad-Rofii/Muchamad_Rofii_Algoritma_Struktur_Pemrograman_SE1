#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

float pertambahan()
{
	float n1, n2, hasil;
	
	cout <<"masukan nilai ke-1 = ";
	cin >> n1;
	cout <<"masukan nilai ke-2 = ";
	cin >> n2;
	
	hasil = n1 + n2;
	
	cout <<"nilai ke-1 + nilai ke-2 = "<<hasil;
	cout <<"\n";
	cout <<"\n";
	
	return 0;
}

float perpangkatan()
{
	float n1, n2, total;
	
	cout <<"masukan nilai = ";
	cin >> n1;
	cout <<"masukan pangkat = ";
	cin >> n2;
	
	total = pow(n1, n2);
	
	cout <<"nilai pangkat = "<<total;
	cout <<"\n";
	cout <<"\n";
	
	return 0;
}

float pembagian()
{
	float n1, n2, jumlah;
	
	cout <<"masukan angka = ";
	cin >> n1;
	cout <<"masukan pembagi = ";
	cin >> n2;
	
	jumlah = n1/n2;
	
	cout <<"jumlah hasil bagi : "<<jumlah;
	
	getch();
}

int main ()
{
	pertambahan();
	perpangkatan();
	pembagian();
}
