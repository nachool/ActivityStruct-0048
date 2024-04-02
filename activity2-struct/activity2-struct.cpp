#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    string umur;
};

int main()
{
    Mahasiswa mhs; //akan mewakili struktur maasiswa
    cout << "Nomor mahasiswa: ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa: ";
    cin >> mhs.nama;

    cout << "Alamat Mahasiswa: " << endl;
    cout << "\t Nama Desa: ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota";
    cin >> mhs.alamat.kota;

    cout << "Umur mahasiswa: ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM: " << mhs.nim;
    cout << "\n Nama: " << mhs.nama;
    cout << "\n Alamat: ";
    cout << " \n Desa: " << mhs.alamat.desa;
    cout << "\n Kota: " << mhs.alamat.kota;
    cout << "\n Umur: " << mhs.umur;
}

