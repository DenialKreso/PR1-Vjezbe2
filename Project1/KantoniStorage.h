#include <iostream>
#include "Kanton.h"
using namespace std;

struct Kantoni {
	int maxBrojKantona = 10;
	int currentIndex = 0;
	Kanton* nizKantona = new Kanton[maxBrojKantona];

	Kantoni(){}
	void AddKanton(string naziv, int drzavaID) {
		bool postoji = false;
		for (int i = 0; i < currentIndex; i++)
		{
			if (nizKantona[i].getNazivKanton() == naziv)
			{
			
				cout << "Kanton postoji." << endl;
				postoji = true;
			}
		}
		if (postoji == false)
		{
			Kanton *k1 = new Kanton(currentIndex, naziv, drzavaID);
			nizKantona[currentIndex] = *k1;
			currentIndex++;
		}

	}
};