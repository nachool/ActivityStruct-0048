#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string umur;
};

int main()
{
    Mahasiswa mhs; //akan mewakili struktur maasiswa
    cout << "Nomor mahasiswa: ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa";
    cin >> mhs.nama;
}

