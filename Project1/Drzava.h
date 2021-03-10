#include <iostream>
using namespace std;

struct Drzave {
	int DrzavaID;
	int currentIndex = 0;
	string Naziv;
	
	int maxBrojDrzava = 10;
	Drzave *nizDrzava = new Drzave[maxBrojDrzava];
	Drzave() {}

	Drzave(string naziv){
		bool postoji = false;
		for (int i = 0; i < maxBrojDrzava; i++)
		{
			if (nizDrzava[i].getNazivDrzava() == naziv)
			{
				cout << "Drzava postoji." << endl;
				postoji = true;
			}
		}
		if (postoji == false)
		{
			Drzave d1 = Drzave(currentIndex, naziv);
			nizDrzava[currentIndex] = d1;
			currentIndex++;
		}
	}

	
	Drzave(int drzavaID, string naziv) {
		this->DrzavaID = drzavaID;
		this->Naziv = naziv;
	}
	void setDrzavaID(int drzavaID) {
		this->DrzavaID = drzavaID;
	}
	void setNazivDrzava(string naziv) {
		this->Naziv = naziv;
	}
	int getDrzavaID() {
		return this->DrzavaID;
	}
	string getNazivDrzava() {
		return this->Naziv;
	}

	void Info() {
		cout << "ID drzave je: " << getDrzavaID() << endl;
		cout << "Naziv drzave je " << getNazivDrzava() << endl;
	}
};
