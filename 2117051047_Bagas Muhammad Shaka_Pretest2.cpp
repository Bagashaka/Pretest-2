#include <iostream>
#include <cmath>

using namespace std;

/* PRETEST 2
  Nama :Bagas Muhammad Shaka
  Kelas:DDP A 2021
  NPM  :2117051047*/
  
int main(){
	//Tipe Data//
	string nama;
    float jumlah_pinjaman;
	int bunga_perbulan;
	int lama_pinjaman;
	float Tahun_Bulan;
	float cicilan_pokok_bulanan;
	float jumlah_bunga_perbulan;
	float total_cicilan;
	
	//intro//
	cout << "ANGSURAN PEMINJAMAN UANG BANK AHSIAP\a" << endl;
	cout << "---------------------------------------------------------" << endl;
	
    //input//
    cout << "Masukkan Nama : ";
    getline(cin,nama);
    cout << "Masukkan Jumlah Pinjaman : Rp.";
    cin >>jumlah_pinjaman;
    cout << "Masukkan Bunga perbulan (%) : ";
    cin >>  bunga_perbulan;
    cout << "Masukkan Lama Pinjaman (Tahun) : ";
    cin >> lama_pinjaman;
    
	//rumus//
	Tahun_Bulan           = lama_pinjaman * 12;
    cicilan_pokok_bulanan = jumlah_pinjaman / Tahun_Bulan;
	jumlah_bunga_perbulan = jumlah_pinjaman * bunga_perbulan/100;
	total_cicilan         = cicilan_pokok_bulanan + jumlah_bunga_perbulan;
    
    //output//
    cout << "--------------------------------------------------------" << endl;
    cout << "Nama Peminjam    : "    << nama << endl;
	cout << "Cicilan Perbulan : Rp." <<total_cicilan << endl;
    
    //penutup//
	cout << "--------------------------------------------------------" << endl;
	cout << "                   DIBAYAR SESUAI JADWAL                " << endl;
    cout << "JIKA JATUH TEMPO DAN BELUM DIBAYAR MAKA BUNGA ANGSURAN NAIK 1% PER-BULAN" << endl;
    cout << "JATUH TEMPO LEBIH DARI 3X JAMINAN JADI MILIK PERUSAHAAAN" << endl;
    cout << "                        TERIMA KASIH                    " << endl;
    
    return 0;
}
