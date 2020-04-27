#include <iostream>
#include <windows.h>

using namespace std;

struct nama_pembeli {
    string kode_pbl[100];
    string status[20];
    string nama[100];
};
struct nama_barang {
    string kode_brng[100];
    string nama_brg[100];
    int harga_brg[100];
};

nama_pembeli orang;
nama_barang beli;
int berapa;

int pembeli()
{
    system ("cls");
    cout << "\Pingin Inputkan Berapa ?? : ";
    cin >> berapa;
    for (int i=1; i<=5; i++) {
        cout << "Masukkan Kode Pembeli : ";
        cin >> orang.kode_pbl[i];
        cout << "Masukkan Status Pembeli (M/BM) : ";
        cin >> orang.status[i];
        cout << "Masukkan Nama Pembeli : ";
        cin >> orang.nama[i];
        cout << "\n";
    }
}

int barang()
{
    system ("cls");
    cout << "\Pingin Inputkan Berapa ?? : ";
    cin >> berapa;
    for (int i=1; i<=berapa; i++) {
        cout << "Masukkan Kode Barang : ";
        cin >> beli.kode_brng[i];
        cout << "Masukkan Nama Barang : ";
        cin >> beli.nama_brg[i];
        cout << "Masukkan Harga Barang : ";
        cin >> beli.harga_brg[i];
        cout << "\n";
    }
}

int view()
{
    system ("cls");
    for (int i=1; i<=5; i++) {
        cout << "Kode Pembeli : " << orang.kode_pbl[i] << "\n";
        cout << "Status Pembeli (M/BM) : " << orang.status[i] << "\n";
        cout << "Nama Pembeli : " << orang.nama[i] << "\n";
        cout << "\n";
    }
    cout << "===============\n";
    for (int i=1; i<=berapa; i++) {
        cout << "Kode Barang : " << beli.kode_brng[i] << "\n";
        cout << "Nama Barang : " << beli.nama_brg[i] << "\n";
        cout << "Harga Barang : " << beli.harga_brg[i] << "\n";
        cout << "\n";
    }
}

int main()
{
    int pilih;
    char lagi;
    do {
    system("cls");
    cout << "1. Masukkan Nama Pembeli \n";
    cout << "2. Masukkan Nama Barang \n";
    cout << "3. Tampikan Output Semua \n";
    cout << "Nomor Berapa ? : ";
    cin >> pilih;

    switch(pilih)
    {
        case 1:
            pembeli();
            break;
        case 2:
            barang();
            break;
        case 3:
            view();
            break;
        default:
            cout << "Nomor Salah \n";
    }
    cout << "\nLagi ?? (y/n) : ";
    cin >> lagi;
    } while(lagi == 'y');
    return 0;
}
