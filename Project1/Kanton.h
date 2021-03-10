#include <iostream>
using namespace std;


struct Kanton {
	int KantonID = 0;
	string Naziv;
	int DrzavaID = 0;
	int currentIndex = 0;
	int maxBrojKantona = 10;
	Kanton *nizKantona = new Kanton[maxBrojKantona];
	
	//DrzavaID
	Kanton() {}
	
	

	Kanton(int kantonID, string naziv, int drzavaID) {
		this->KantonID = kantonID;
		this->Naziv = naziv;
		this->DrzavaID = drzavaID;
	}
	void setKantonID(int kantonID) {
		this->KantonID = kantonID;
	}
	void setNazivKanton(string naziv) {
		this->Naziv = naziv;
	}
	int getKantonId() {
		return this->KantonID;
	}
	string getNazivKanton() {
		return this->Naziv;
	}
	void setDrzavaID(int drzavaID) {
		this->DrzavaID = drzavaID;
	}
int getDrzavaID() {
			return this->DrzavaID;
		}
	
	void info() {
		cout << "ID kantona je: " << getKantonId() << endl;
		cout << "Naziv kantona je " << getNazivKanton() << endl;
	}
};