#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    string umur;
};

int main()
{
    Mahasiswa mhs; //akan mewakili struktur maasiswa
    cout << "Nomor mahasiswa: ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa: ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa: ";
    cin >> mhs.alamat;
    cout << "Umur mahasiswa: ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM: " << mhs.nim;
    cout << "\n Nama: " << mhs.nama;
    cout << "\n Alamat: " << mhs.alamat;
    cout << "\n Umur: " << mhs.umur;
}

