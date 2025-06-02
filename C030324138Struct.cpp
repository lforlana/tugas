#include "conio.h"
#include "stdio.h"
#include "string.h"
#include <iostream>

using namespace std;

struct mahasiswa
{
    int ipk;
    string nim;
    string nama;
    string alamat;
    string jurusan;
    string kelas;
};


int main() {
    struct mahasiswa lana;
    lana.ipk = 4;
    lana.nim = "C030324138";
    lana.nama = "lana";
    lana.alamat = "Sungai Lulut";
    lana.jurusan = "TI";
    lana.kelas = "Kelas 2B";
    

    cout << "NIM: " << lana.nim << endl;
    cout << "IPK: " << lana.ipk << endl;
    cout << "Nama: " << lana.nama << endl;
    cout << "Alamat: " << lana.alamat << endl;
    cout << "Jurusan: " << lana.jurusan << endl;
    cout << "Kelas: " << lana.kelas << endl;
}