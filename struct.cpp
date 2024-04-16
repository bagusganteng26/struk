#include <iostream>
#include <string.h>

using namespace std;

struct Mahasiswa
{
    string nim, nama, jurusan;
    int umur;
};

int main () {

    Mahasiswa mhs[5];

    mhs[0].nama = "Bagus Eko";
    mhs[0].nim = "202311002";
    mhs[0].jurusan = "Informatika";
    mhs[0].umur = 18;

    cout << "Nama Mahasiswa 1 : " << mhs[0].nama << endl;
    cout << "NIM Mahasiswa 1 : " << mhs[0].nim << endl;
    cout << "Jurusan Mahasiswa 1 : " << mhs[0].jurusan << endl;
    cout << "Umur Mahasiswa 1 : " << mhs[0].umur << endl;
    cout << endl;

    mhs[1] = {"202311003", "Eko Wijayanto", "Elektro", 19};

    cout << "Nama Mahasiswa 2 : " << mhs[1].nama << endl;
    cout << "NIM Mahasiswa 2 : " << mhs[1].nim << endl;
    cout << "Jurusan Mahasiswa 2 : " << mhs[1].jurusan << endl;
    cout << "Umur Mahasiswa 2 : " << mhs[1].umur << endl;
    cout << endl;

    mhs[2] = {"202311004", "Yanto", "Manajemen", 20};

    cout << "Nama Mahasiswa 3 : " << mhs[2].nama << endl;
    cout << "NIM Mahasiswa 3 : " << mhs[2].nim << endl;
    cout << "Jurusan Mahasiswa 3 : " << mhs[2].jurusan << endl;
    cout << "Umur Mahasiswa 3 : " << mhs[2].umur << endl;
    cout << endl;

    return 0;
}
