#include <iostream>
using namespace std;

class Barang{
public :
    string nama;
    int jumlah;
    string kategori;
    string TahunProduksi;

    void InputData(){
        cout << "==============Input Data=============" << endl;
        cout << "Masukan nama barang : ";
        cin >> nama;
        cout << "Masukan jumlah barang : ";
        cin >> jumlah;
        cout << "Masukan kategori barang : ";
        cin >> kategori;
        cout << "Masukan tahun produksi : ";
        cin >> TahunProduksi;
    }
    void TampilSpek(){
        cout << "==============Tampil Data=============" << endl;
        cout << "Nama Barang : " << nama << endl;
        cout << "Jumlah Barang : " << jumlah << endl;
        cout << "Kategori Barang : " << kategori << endl;
        cout << "Tahun Produksi : " << TahunProduksi << endl;

    }

};

