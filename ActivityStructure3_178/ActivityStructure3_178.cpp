#include <iostream>
using namespace std;

struct ALamatDetail {
    char desa[20];
    char kota[20];
};

struct Mahasiswa {
    char NIM[12];
    char nama[20];
    ALamatDetail alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan NIM : ";
        cin.getline(mhs[i].NIM, 12);
        cout << "Masukkan Nama : ";
        cin.getline(mhs[i].nama, 20);
        cout << "Alamat: " << endl;
        cout << "\tNama Desa : ";
        cin.getline(mhs[i].alamat.desa, 20);
        cout << "\tNama Kota : ";
        cin.getline(mhs[i].alamat.kota, 20);
        cout << "Masukkan Umur : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');

    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\nNIM : " << mhs[i].NIM;
        cout << "\nNama : " << mhs[i].nama;
        cout << "\nAlamat: ";
        cout << "\n\tDesa : " << mhs[i].alamat.desa;
        cout << "\n\tKota : " << mhs[i].alamat.kota;
        cout << "\nUmur : " << mhs[i].umur;
    }
}
