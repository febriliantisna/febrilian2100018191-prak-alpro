#include <iostream>
#include <string>

using namespace std;

int main(){
	int pil,harga,jumlah,total,bayar,banyak,uang;
	int diskon,akhir,kembalian,porsi;
	cout<<"===KEDAI WARUNG MAKAN SERBA AYAM==="<<endl;
	cout<<"1. AYAM GORENG			Rp.17.000"<<endl;
	cout<<"2. AYAM BAKAR			Rp.21.000"<<endl;
	cout<<"Jumlah Menu Yang Dipesan = ";
	cin>>banyak;
	jumlah=1;
	bayar=0;
	for(jumlah=1;jumlah<=banyak;jumlah++){
	cout<<"Masukan Pesanan : ";cin>>pil;
	switch(pil){
		case 1:
			cout<<"Pesanan	: AYAM GORENG"<<endl;
			cout<<"Harga 	: Rp.17.000"<<endl;
			harga=17000;
			cout<<"Masukan Porsi :";
			cin>>porsi;
			total=harga*porsi;
			cout<<"Total Harga	= Rp "<<total;
		case 2:
			cout<<"AYAM BAKAR"<<endl;
			harga=21000;
			cout<<"Masukan Porsi :";
			cin>>porsi;
			total=harga*porsi;
			cout<<"Total Harga	= Rp "<<total;
	}
	bayar=bayar+total;
}
cout<<"Total Bayar		= Rp "<<bayar<<",-";
cout<< "Masukan Pembayaran	= Rp ";cin>>uang;
	if(bayar>=45000){
		diskon=bayar*0.10;
		cout<<"Kamu Dpat Diskon 10%";}
	else{
		diskon=0;
	}
	akhir=bayar-diskon;
	kembalian=uang-akhir;
	cout<<"Kamu Dapat Diskon     = Rp"<<diskon<<",-";
	cout<<"Cash Back              = Rp"<<kembalian<<",-";
	return 0;
}
