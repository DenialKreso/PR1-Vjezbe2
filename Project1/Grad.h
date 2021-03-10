#include <iostream>
using namespace std;
#include "Kanton.h"


struct Grad {
	int GradID;
	string GradNaziv;
	Kanton kanton;
	int currentIndex = 0;
	int maxBrojGradova = 0;
	Grad() {}
	Grad(int gID, string gradnaziv, Kanton k) {
		this->GradID = gID;
		this->GradNaziv = gradnaziv;
		this->kanton = k;
	}
	Grad(string gradnaziv, Kanton k) {
		this->GradID = currentIndex;
		currentIndex++;
		this->GradNaziv = gradnaziv;
		this->kanton = k;
	}
	Grad(string nazivGrada, int kantonID) {
		this->GradID = currentIndex;
		currentIndex++;
		this->GradNaziv = nazivGrada;
		this->kanton = kanton.nizKantona[kantonID];
	}
	Grad(string naziv, string imeKantona) {
		this->GradID = currentIndex;
		currentIndex++;
		this->GradNaziv = naziv;
		for (int i = 0; i < kanton.currentIndex; i++)
		{
			if (kanton.nizKantona[i].getNazivKanton() == imeKantona)
			{
				this->kanton = kanton.nizKantona[i]; //dodjeljen kanton
			}
		}
	}


	void Info() {
		cout << "GradID: " << GradID << endl;
		cout << "Naziv grada: " << GradNaziv << endl;
		kanton.info();
	}
};