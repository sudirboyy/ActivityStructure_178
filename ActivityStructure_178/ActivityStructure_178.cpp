#include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM;
    string nama;
    string alamat;
    int umur;
};

int main()
{
    std::cout << "Hello World!\n";
    Mahasiswa mhs1, mhs2;
    mhs1.NIM = "20220140178";
    mhs1.nama = "Sudirman";
    mhs1.alamat = "Kulonprogo";
    mhs1.umur = 20