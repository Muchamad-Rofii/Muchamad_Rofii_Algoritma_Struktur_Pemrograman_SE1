/*--------------------------*/
/*Program Dengan Pernyataan Goto*/
/*--------------------------*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){

int  a,b;

char ulang;
	awal :
	
	cout << "Masukan Bilangan = ";
	cin>>a;
	b=a%2;
	
	cout << "hasil modulus =";
	cout<<b<< endl;
	
	cout << "ingin hitung lagi [Y/T]: ";
	cin >>ulang;

if (ulang == 'Y' || ulang =='y'){\

	goto awal;
}

if(ulang == 'T' || ulang=='t'){

	goto akhir;
}
akhir:
cout << "program selesai.";
return 0;
}
