#include<iostream>
#include<stdlib.h>

using namespace std;

class penambahanData{
	private:
	int stock;
	
	public :
	void Pensil ();
	void Buku ();
	void Penghapus();
};

	void penambahanData::Pensil(){
	int stock = 8, stokPensil, total;
	cout<<"Masukan jumlah stock barang = "; cin>>stokPensil;
	total = stock + stokPensil;
	cout<<"Total stok pensil adalah "<<total<<endl;
}

	void penambahanData:: Buku(){
	int stock = 10, stokBuku, total;
	cout<<"Masukan jumlah stock barang = ";cin>>stokBuku;
	total= stock+stokBuku;
	cout<<"total stok buku adalah "<<total<<endl;
}
void penambahanData::Penghapus(){
	int stock =28, stokPenghapus, total;
	cout<<"Masukan jumlah stock barang = "; cin>>stokPenghapus;
	total = stock + stokPenghapus;
	cout<<"total stok penghapus adalah "<<total<<endl;
}

int main (int argc, char** argv){
	int pilih;
	cout<<"No. \t Nama Barang \t stock "<<endl;
	cout<<"1. \t pensil \t 8"<<endl;
	cout<<"2. \t buku \t 10"<<endl;
	cout<<"3. \t penghapus \t 28"<<endl;
	
	cout<<"pilih barang yang akan di tambah stocknya [1,2,3] = "; cin>>pilih;
	if (pilih ==1){
	penambahanData Pensil;
	Pensil.Pensil();
	cout<<"Terima kasih"<<endl;
}
if (pilih == 2){
	penambahanData Buku;
	Buku.Buku();
	cout<<"terima kasih"<<endl;
}
if (pilih ==3){
	penambahanData Penghapus;
	Penghapus.Penghapus();
	cout<<"Terima kasih"<<endl;
}
return 0;
system("PAUSE");
}
