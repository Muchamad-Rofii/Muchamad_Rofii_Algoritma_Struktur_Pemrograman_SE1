#include <iostream>
using namespace std;

int main() {
	
    int a_segitiga, t_segitiga, l_segitiga;

	 cout << "PROGRAM MODIFIKASI PENGHITUNG LUAS SEGITIGA"<<endl;
	 
	cout << "\n<===========================>"<<endl<<endl;
	
    cout << "Input alas segitiga: ";
    cin >> a_segitiga;
    cout << "\nInput tinggi segitiga: ";
    cin >> t_segitiga;
    
	//Modifikasi input alas segitiga:  
    	if(a_segitiga % 2 == 0){
    		a_segitiga += 9;
		}
		else if(a_segitiga % 2 == 1){
			a_segitiga += 2;
		}
		
	//Modifikasi input tinggi segitiga
		if(t_segitiga < 10){
			t_segitiga *= 3;
		}
		else if(t_segitiga > 30){
			t_segitiga /= 2;
		}
		
    l_segitiga = 0.5 * a_segitiga *  t_segitiga;
    
    cout << "\n<===========================>"<<endl;
    
    cout << "\nAlas segitiga menjadi: "<< a_segitiga<<endl;
    cout << "\nTinggi segitiga menjadi: "<< t_segitiga<<endl;
    
    cout << "\n<===========================>"<<endl;

    cout << "\nLuas segitiga adalah: " << l_segitiga << endl;

    return 0;
}

