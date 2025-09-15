// Nama : Kanaya Traylingga Pratama
// NPM  : 2415061059 
// Kelas: Algoritma  & pemrograman - D

//Tugas Menghitung jumlah baju, masker, dan keuntungan Bu tailor

#include <iostream>
using namespace std;
int main()
{
	//======================Deklarasi========================
    
    // Baju------------------
	float kain_per_baju = 3.5; // m2
    int harga_jual_baju = 120000; // Rp
	
    // Masker-----------------
    float Lcm = 10; // cm
    float Pcm = 20; // cm
    float kain_per_masker = (Pcm / 100) * (Lcm / 100); // m2
    int harga_jual_masker = 10000; // Rp 
	
    // kain yang dibeli---------
	float Lkain = 1.25;  // m
    float Pkain = 30.0; // m
    float Lskain = Pkain * Lkain; // m2
    int harga_beli_kain = 2900000; // Rp

    //========================Algoritma=======================
    
    // menghitung baju yang dapat dijahit---------------------
    int Jumlah_Baju = Lskain / kain_per_baju;
    cout << "Jumlah baju : " << Jumlah_Baju << endl;

    // sisa kain----------------------------------------------
    float Total_kainbaju = Jumlah_Baju * kain_per_baju;
    float Sisa_kain = Lskain - Total_kainbaju;

    // Menghitung masker yang dapat dijahit-------------------
    float Jumlah_masker = Sisa_kain / kain_per_masker;
    cout << "Jumlah masker : " << Jumlah_masker << endl;
    
    //pendapatan Bu Tailor sweet---------------------//---------
    int pendapatan_baju = Jumlah_Baju * harga_jual_baju;
    float pendapatan_masker = Jumlah_masker * harga_jual_masker;
    int total_pendapatan = pendapatan_baju + pendapatan_masker;

    //keuntungan Bu Tailoe sweet------------------------------
    int keuntungan = total_pendapatan - harga_beli_kain;
    cout << "keuntungan : " << keuntungan << endl;
    return 0;
}
   

