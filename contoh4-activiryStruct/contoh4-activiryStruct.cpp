#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat {
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
    Mahasiswa mhs[3]; 
    for (int i = 0; i < 3; i++) {
        cout << "data ke-" << (i + 1) << ":" << endl;
        cout << "Nomor mahasiswa: ";
        getline(cin, mhs[i].nim); // cin harus sesudah getline 
        cout << "Nama Mahasiswa: ";
        getline(cin, mhs[i].nama); // getline berfungsi saat penulisan mana lengkap

        cout << "Alamat Mahasiswa: " << endl;
        cout << "\t Nama Desa: ";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama Kota: ";
        cin >> mhs[i].alamat.kota;

        cout << "Umur mahasiswa: ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
    }

    for (int i = 0; i < 3; i++) {

        cout << endl;
        cout << "\n NIM: " << mhs[i].nim;
        cout << "\n Nama: " << mhs[i].nama;
        cout << "\n Alamat: ";
        cout << "\n \tDesa: " << mhs[i].alamat.desa;
        cout << "\n \tKota: " << mhs[i].alamat.kota;
        cout << "\n Umur: " << mhs[i].umur;
    }
}


