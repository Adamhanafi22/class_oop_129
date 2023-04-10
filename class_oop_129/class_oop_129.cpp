#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama= " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMk;
public:
	void inputMK() {

		cout << "\nMasukkan jumlah sks= ";
		cin >> sks;
		cout << "\nMasukkan Kode Mk= ";
		cin >> kode;
		cout << "\nMasukkan nama= ";
		cin >> namaMk;

	}
	void tampilMK() {
		cout << "\nJumlah sks= ";
		cout << "\nKode MK= ";
		cout << "\nNama MK= ";


	}
		
};