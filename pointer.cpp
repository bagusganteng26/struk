#include <iostream>

using namespace std;

int main () {
    string nama = "Bagus Eko";
    cout << nama << " berada pada alamat : " << &nama << endl;

    string *ptrNama = &nama;

    cout << "ptrNama : " << ptrNama << endl;
    cout << "Nilai pada alamat ptrNama : " << ptrNama << endl;

    *ptrNama = "Bagus";
    cout << "Nilai pada variabel nama : " << nama << endl;
    cout << "Nilai pada alamat pointer : " << *ptrNama << endl;

    int nilai = 8;
    int *ptrNilai = &nilai;
    cout << "isi pada VARIABEL nilai : " << nilai << endl;
    cout << "alamat pada VARIABEL nilai : " << ptrNilai << endl;
    (*ptrNilai)++; 
    (*ptrNilai)++;
    cout << "variabel angka berubah : " << nilai << endl;
    cout << "alamat pada VARIABEL nilai : " << ptrNilai << endl;


}   