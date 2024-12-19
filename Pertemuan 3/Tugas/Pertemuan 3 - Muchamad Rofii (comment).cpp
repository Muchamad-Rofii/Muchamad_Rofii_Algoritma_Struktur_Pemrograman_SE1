#include <iostream>
using namespace std;
int main()
{
	// inisialisasi variabel
	int x=50; // inisialisasi variabel x adalah 50
	
	int a,b,c,d,e; // Pembuatan/Deklarasi variabel a,b,c,d,e
	
	// proses
	a = x > 5 + 5; //inisialisasi a bahwa nilai x lebih besar dibandingkan 5 + 5
	b = x > 100; // inisialisasi b bahwa nilai x lebih besar dari pada 100
	c = a&&b; // inisialisasi c bahwa a dan(and) b kedua nilainya benar atau sama benarnya
	d = a||b; // inisialisasi d sebagai salah satu dari nilai a atau(or) b benar
	e = !(c); // inisialisasi e sebagai kebalikan dari hasil c
	
	//output berupa 1 (benar) dan 0 (salah)
	cout << "\nNilai a = x > 5 + 5 = " << a << endl; // menampilkan output dari variabel a yang sudah diberikan inisialisasi berupa x lebih besar dari 5 + 5 dan hasilnya benar karena 50 (nilai x) lebih besar dari pada 10 (nilai a) jadi output yang dikeluarkan adalah 1
	
	cout << "\nNilai b = x > 100 = " << b << endl; // menampilkan output dari variabel b yang sudah diberikan inisialisasi berupa x lebih besar dari 100 dan hasilnya salah karena 50 (nilai x) lebih kecil dari pada 100 (nilai b) jadi output yang dikeluarkan adalah 0
	
	cout << "\nNilai c = a&&b = " << c << endl; // menampilkan output dari variabel c yang sudah diberikan inisialisasi berupa jika a dan b keduanya hasilnya benar maka akan tampil nilai 1 (benar). namun karena nilai b salah jadi output yang dikeluarkan adalah 0
	
	cout << "\nNilai d = a||b = " << d << endl; // menampilkan output dari variabel d yang sudah diberikan inisialisasi berupa jika salah satu dari a atau b benar maka output yang akan dihasilkan adalah 1 (benar). karena nilai a nilai benar jadi output yang dikeluarkan adalah 1
	
	cout << "\nNilai e = !(c) = " << e << endl; // menampilkan output dari variabel e yang sudah diberikan inisialisasi berupa kebalikan dari output nilai c yaitu 1

	getchar();
}
