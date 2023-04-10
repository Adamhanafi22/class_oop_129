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
		cout << "\nMasukkan nama Mk= ";
		cin >> namaMk;

	}
	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMk << endl;


	}
	
	
		
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	cout << "\ninput data Mahasiswa " << endl;
	cout << "\nMasukan Nim= ";
	cin >> mhs.nim;
	cout << "\nmasukan nama=";
	cin >> mhs.nama;

	

	
	mk.inputMK();
	mk.tampilMK();
	mhs.tampil();

}

