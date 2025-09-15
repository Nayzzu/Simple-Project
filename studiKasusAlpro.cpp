#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main()
{
    string buku[7] = {"1. BUKU KOMIK", "2. NOVEL", "3. BUKU TULIS SIDU 58 LMBR", "4. BUKU TULIS SIDU 38 LMBR", "5. JUZ AMMA", "6. IQRO", "7. KAMUS BAHASA INGGRIS"};
    string harga[7] = {};
    string namaPenjual = "Riffa";
    int pilihanBuku = 99;
    int jumlahHargabuku;
    int hargaBuku;
    int banyakPilihan;
    string namaBuku;
    int pcs;

    while (pilihanBuku != 0)
    {
        banyakPilihan++;

        cout << "\t    TOKO BUKU HIMATRO  " << endl;
        cout << left << setw(30) << "0. SELESAI" << endl;
        cout << left << setw(30) << "1. BUKU KOMIK" << setw(8) << "Rp. 80.000" << endl;
        cout << left << setw(30) << "2. NOVEL" << setw(8) << "Rp. 90.000" << endl;
        cout << left << setw(30) << "3. BUKU TULIS SIDU 58 LMBR" << setw(8) << "Rp. 50.000" << endl;
        cout << left << setw(30) << "4. BUKU TULIS SIDU 38 LMBR" << setw(8) << "Rp. 25.000" << endl;
        cout << left << setw(30) << "5. JUZ AMMA" << setw(8) << "Rp. 30.000" << endl;
        cout << left << setw(30) << "6. IQRO" << setw(8) << "Rp. 15.000" << endl;
        cout << left << setw(30) << "7. KAMUS BAHASA INGGRIS" << setw(8) << "Rp. 40.000" << endl;
        cout << endl;
        cout << "MASUKKAN PILIHAN MU(0-7) = ";
        cin >> pilihanBuku;
        cout << endl;

        switch (pilihanBuku)
        {
        case 1:
            namaBuku = "BUKU KOMIK";
            hargaBuku = 80000;
            jumlahHargabuku += hargaBuku;

            break;
        case 2:
            namaBuku = "BUKU NOVEL";
            hargaBuku = 90000;
            jumlahHargabuku += hargaBuku;
            break;
        case 3:
            namaBuku = "BUKU TULIS 58 LMBR";
            hargaBuku = 50000;
            jumlahHargabuku += hargaBuku;
            break;
        case 4:
            namaBuku = "BUKU TULIS 38 LMBR";
            hargaBuku = 25000;
            jumlahHargabuku += hargaBuku;
            break;
        case 5:
            namaBuku = "JUZ AMMA";
            hargaBuku = 30000;
            jumlahHargabuku += hargaBuku;
            break;
        case 6:
            namaBuku = "IQRO";
            hargaBuku = 15000;
            jumlahHargabuku += hargaBuku;
            break;
        case 7:
            namaBuku = "KAMUS BAHASA INGGRIS";
            hargaBuku = 40000;
            jumlahHargabuku += hargaBuku;
            break;
        default:
            break;
        }
    }
    time_t now = time(0);
    tm *localTime = localtime(&now);

    cout << "\t    TOKO BUKU HIMATRO  " << endl;
    cout << "\tKANTIN FAKULTAS TEKNIK UNILA" << endl;
    cout << "\t  BANDARLAMPUNG, LAMPUNG" << endl;
    cout << endl;
    cout << left << setw(1) << "TGL = " << localTime->tm_mday << "-" << (localTime->tm_mon + 1) << "-" << (localTime->tm_year + 1900) << right << setw(20) << "OP = " << namaPenjual << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < banyakPilihan; i++)
    {
        cout << left << setw(30) << namaBuku << setw(15) << hargaBuku << endl;
    }

    return 0;
}