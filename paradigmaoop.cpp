#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    float nilai;

    void PrintData() {
        cout << "NIM: " << nim << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main() {
    Mahasiswa mhs;
    mhs.nim = 12345;
    mhs.nama = "zidan";
    mhs.nilai = 85.5;

    Mahasiswa mhs1;
    mhs1.nim = 67890;
    mhs1.nama = "Akmal";
    mhs1.nilai = 90.0;


}