#include <iostream>
#include <string>
using namespace std;

    struct mahasiswa{
	string nim;
	string nama;
	string alamat;
	float ipk;
};

int inputData(string *nim, string *nama, string *alamat, float *ipk) {
    cout << "NIM = ";          getline(cin, *nim);
    cout << "Nama = ";         getline(cin, *nama);
    cout << "Alamat = ";       getline(cin, *alamat);
    cout << "IPK = ";          cin >> *ipk;
    cin.ignore();
}

void outputData(const mahasiswa &lana) {
    system("cls");
    cout << "\n------------- Data ------------- :\n";
    cout << "NIM    : " << lana.nim << endl;
    cout << "Nama   : " << lana.nama << endl;
    cout << "Alamat : " << lana.alamat << endl;
    cout << "ipk    : " << lana.ipk << endl;
    cout << "---------------------------------------\n";
}

int main() {
    mahasiswa lana;
    inputData(&lana.nim, &lana.nama, &lana.alamat, &lana.ipk);
    outputData(lana);
    return 0;
}