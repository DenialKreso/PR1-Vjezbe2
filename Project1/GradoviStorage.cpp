#include <iostream>
using namespace std;
#include "Gradovi.h"
#include "Drzava.h"
#include "KantoniStorage.h"
int main() {

	Kantoni *ListaKantona = new Kantoni();
	ListaKantona->AddKanton("HNK", 0);
	Drzave drzava = Drzave("BIH");
	drzava.Info();
	
	ListaKantona->nizKantona[0].info();
	Gradovi gradovi = Gradovi();
	gradovi.AddGrad("Mostar", "HNK");
	return 0;
}