#include <iostream>
using namespace std;
#include "Grad.h"

struct Gradovi {
	int currentIndex = 0;
	int maxBrojGradova = 10;
	Grad* nizGradova = new Grad[maxBrojGradova];

	Gradovi() {}
	void AddGrad(string naziv, int kantonID) {
		//napraviti novu varijablu "grad"
		//dodati grad u niz gradova
		bool postoji = Contains(naziv);
		if (postoji == false)
		{
			Grad grad = Grad(naziv, kantonID);
			this->nizGradova[currentIndex] = grad;
			currentIndex++;
		}
		else
			cout << "Grad vec postoji." << endl;
	}
	void AddGrad(string naziv, string nazivKantona) {
		bool postoji = Contains(naziv);
		if (postoji == false)
		{
			Grad grad = Grad(naziv, nazivKantona);
			this->nizGradova[currentIndex] = grad;
			currentIndex++;
		}	
		else
			cout << "Grad vec postoji." << endl;
	}
	//void AddGrad(string naziv, Kantoni k) {
	//	bool postoji = Contains(naziv);
	//	if (postoji == false)
	//	{
	///*		Grad grad = new Grad(naziv, k);
	//		this->nizGradova[currentIndex] = Grad(naziv, k);
	//		currentIndex++;*/
	//	}
	//	else
	//		cout << "Grad vec postoji." << endl;
	//	
	//}
	bool Contains(string naziv) {
		bool postoji = false;
		for (int i = 0; i < currentIndex; i++)
		{
			if (nizGradova[i].GradNaziv == naziv)
			{
				postoji = true;
			}
		}
		return postoji;
	}
	void GradInfo(int index) {
		nizGradova[index].Info();
	}
	void GradInfo(string naziv) {
		for (int i = 0; i < currentIndex; i++)
		{
			if (nizGradova[i].GradNaziv == naziv)
			{
				nizGradova[i].Info();
			}
		}
	}
};