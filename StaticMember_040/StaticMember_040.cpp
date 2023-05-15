#include <iostream>
#include <string>

using namespace std;

class mahasiswa {
	public:
		static int nim;
		int id;
		string nama;

		void setID();
		void printAll();

		mahasiswa(string pnama) : nama(pnama) {setID();}
};

int mahasiswa::setID() {
	id = ++nim;

}

void mahasiswa::printAll() {
	cout <<"ID = "<<id<<endl;
	cout <<"Nama = "<<nama<<endl;
	cout<<endl;

}

int main() {
	mahasiswa mhs1("Osama Bin Laden");
	mahasiswa mhs2("George W. Bush");
	mahasiswa mhs3("Muammar Khadaffi");
	mahasiswa mhs4("Jesus Christ");
	
	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	return 0;
}

