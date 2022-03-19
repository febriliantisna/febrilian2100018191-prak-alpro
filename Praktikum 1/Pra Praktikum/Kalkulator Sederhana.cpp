/* MUHAMMAD FEBRILIAN TISNA */
/* 2100018191 */
/* SLOT RABU, 10.30 */
/* KELAS D */

#include <iostream>

using namespace std ;

int main() {

	float pilih, bil1, bil2, tot ;

	ulang:
		
	cout << "1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n" ;
	cout <<"\n\n" ;
	cout << "Masukkan Pilihan = " ;
	cin >> pilih ;
	
		if ( pilih==1) {
		cout << " Masukkan bilangan pertama = " ;
		cin >> bil1 ;
		cout << " Masukkan bilangan kedua   = " ;
		cin >> bil2 ;
		tot = bil1 + bil2 ;
		cout << tot ;
	 } 
	 
	 else if (pilih==2) {
	 	cout << " Masukkan bilangan pertama = " ;
		cin >> bil1 ;
		cout << " Masukkan bilangan kedua   = " ;
		cin >> bil2 ;
		tot = bil1 - bil2 ;
		cout << tot ;
	 }
	 
	 else if (pilih==3) {
	 	cout << " Masukkan bilangan pertama = " ;
		cin >> bil1 ;
		cout << " Masukkan bilangan kedua   = " ;
		cin >> bil2 ;
		tot = bil1 * bil2 ;
		cout << tot ;
	}
	
	else if (pilih==4) {
		cout << " Masukkan bilangan pertama = " ;
		cin >> bil1 ;
		cout << "Masukkan bilangan kedua    = " ;
		cin >> bil2 ;
		tot = bil1 / bil2 ;
		cout << tot ;
	}
		
	else {
		cout << "Tidak ada dalam opsi pilihan\n" ;
		
		goto ulang ;
	}
	
	return 0 ;

	}