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

void cetak (Mahasiswa data) {
    cout << "Nama Mahasiswa : " << data.nama << endl;
    cout << "NIM Mahasiswa : " << data.nim << endl;
    cout << "Jurusan Mahasiswa : " << data.jurusan << endl;
    cout << "Umur Mahasiswa : " << data.umur << endl;
    cout << "Alamat Mahasiswa :" << data.alamat.kota << endl;
    cout << "Nama Kampus Mahasiswa : " << data.kp.namaKampus << endl;
    cout << "Alamat kampus Mahasiswa : " << data.kp.alamatKampus << endl;
    cout << "Tahun beridir kampus Mahasiswa : " << data.kp.tahun << endl;
    cout << endl;
}

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

    cetak(mhs[0]);

    mhs[1].nama = "Eko Wijayanto";
    mhs[1].nim = "202311003";
    mhs[1].jurusan = "Manajemen";
    mhs[1].umur = 19;
    mhs[1].kp.namaKampus = "Sekolah Tinggi Teknik Pati";
    mhs[1].kp.alamatKampus = "Pati";
    mhs[1].kp.tahun = 1945;
    mhs[1].alamat.kota = "Rembang";

    cetak(mhs[1]);

    return 0;
}
