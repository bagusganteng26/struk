#include <iostream>
#include <string.h>

using namespace std;

struct Kampus {
    string namaKampus, alamatKampus;
    int tahun;
};
struct Mahasiswa {

    string nim, nama, jurusan;
    int umur;
    Kampus kp;
    struct Ala
    {
        string kota;
    }alamat;
    
};

int main () {

    Mahasiswa mhs[5];

    mhs[0].nama = "Bagus Eko";
    mhs[0].nim = "202311002";
    mhs[0].jurusan = "Informatika";
    mhs[0].umur = 18;
    mhs[0].kp.namaKampus = "Sekolah Tinggi Teknik Pati";
    mhs[0].kp.alamatKampus = "Pati";
    mhs[0].kp.tahun = 1945;
    mhs[0].alamat.kota = "Kudus";

    cout << "Nama Mahasiswa 1 : " << mhs[0].nama << endl;
    cout << "NIM Mahasiswa 1 : " << mhs[0].nim << endl;
    cout << "Jurusan Mahasiswa 1 : " << mhs[0].jurusan << endl;
    cout << "Umur Mahasiswa 1 : " << mhs[0].umur << endl;
    cout << "Alamat Mahasiswa 1 :" << mhs[0].alamat.kota << endl;
    cout << "Nama Kampus Mahasiswa 1 : " << mhs[0].kp.namaKampus << endl;
    cout << "Alamat kampus Mahasiswa 1 : " << mhs[0].kp.alamatKampus << endl;
    cout << "Tahun beridir kampus Mahasiswa 1 : " << mhs[0].kp.tahun << endl;
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
