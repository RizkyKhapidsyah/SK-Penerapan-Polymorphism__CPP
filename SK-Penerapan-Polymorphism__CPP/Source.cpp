#pragma warning (disable:4996)

#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

class HewanPeliharaan {
public:
	void lucu() {
		cout << " Lucunya hewan peliharaan" << endl;
	}

	virtual void makan() { // anggota class
		cout << " Makan... dibutuhkan hewan peliharaan" << endl;
	}
};

class Jinak : public HewanPeliharaan {
public:
	void lucu() {
		cout << " Lucu dan Jinak" << endl;
	}

	virtual void makan() {
		cout << " Diberi makan agar jinak" << endl;
	}
};

class Kucing : public Jinak {
public:
	void lucu() {
		cout << " Lucunya kucing" << endl;
	}
	
	virtual void makan() {
		cout << " Makanan dibutuhkan Kucing" << endl;
	}
};

int main() {
	//definisi Objek Jinak dan Kucing puma
	Jinak jinak;
	Kucing puma;

	//definisi pointer ke objek
	HewanPeliharaan* hewan;
	
	hewan = &jinak;
	hewan->lucu();
	hewan->makan();
	
	cout << " -----------------------------" << endl;
	
	hewan = &puma;
	hewan->lucu();
	hewan->makan();
	
	_getch();
	return 0;
}