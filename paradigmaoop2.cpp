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
};