#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int rl, rt, tt;
	const float pi = 3.14286;
	
	
	cout<<"Program Penghitung Luas Lingkaran Dan Volume Tabung" <<endl;
	cout<<"\n";
	cout<<"\n<==Luas Lingkaran==> ";
	cout<<"\nMasukan nilai jari-jari lingkaran = ";
	cin>>rl;
	
	int equationL = pi*(rl*rl);
	
	cout<<"\ndiketahui luas lingkaran: " <<endl;
	cout<<"jari-jari = " <<rl <<endl;
	cout<<"pi        = " <<pi << endl;
	cout<<"L         = pi x (r x r)" <<endl;
	cout<<"L         = " << pi << " x " << rl << " x " << rl << endl;
	cout<<"L         = " << equationL <<"cm" <<endl<<endl;
	cout<<"Luas lingkaran dengan jari jari " <<rl <<" cm adalah = " << equationL <<" cm";
	cout<<"\n";
	cout<<"\nTekan Untuk Lanjutkan" <<endl;
	
	getch();
	
	cout<<"\n<==Volume Tabung==> ";
	cout<<"\nMasukan nilai jari-jari tabung = ";
	cin>>rt;
	cout<<"\nMasukan nilai tinggi tabung = ";
	cin>>tt;
	
	int equationT = pi*(rt*rt)*tt;
	
	cout<<"\ndiketahui luas tabung dan tinggi tabung: " <<endl;
	cout<<"jari-jari = " <<rt <<endl;
	cout<<"pi        = " <<pi <<endl;
	cout<<"tinggi    = " <<tt <<endl;
	cout<<"V         = pi x (r x r) x tt" <<endl;
	cout<<"V         = " << pi << " x " << rt << " x " << rt << " x " << tt <<endl;
	cout<<"V         = " << equationT <<"cm" <<endl<<endl;
	cout<<"Volume tabung dengan jari jari " <<rt<<" cm dan tinggi"<<tt<<" cm adalah = " << equationT <<" cm"<<endl;
}
