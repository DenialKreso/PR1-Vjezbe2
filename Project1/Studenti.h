#include <iostream>
using namespace std;

struct Studenti {
	int BrojDosijea;
	string Ime;
	string Prezime;
	string ImeRoditelja;
	int* DatumRodjenja = new int[3];
	int JMBG;
	char Spol;
	string Adresa;
	string MjestoPrebivalista;
	//GradID
	int BrojTelefona;
	string Mail;
	string Biljeske;
	//slika
	Studenti() {}
	Studenti(int brojDosijea,string ime, string prezime, string imeRoditelja, int datumRodjenja[3], int jmbg, char spol, string adresa,
		string mjestoPrebivalista, int brojTelefona, string mail, string biljeske)
	{
		this->BrojDosijea = brojDosijea;
		this->Ime = ime;
		this->Prezime = prezime;
		this->ImeRoditelja = imeRoditelja;
		this->DatumRodjenja = datumRodjenja;
		this->JMBG = jmbg;
		this->Spol = spol;
		this->Adresa = adresa;
		this->MjestoPrebivalista = mjestoPrebivalista;
		this->BrojTelefona = brojTelefona;
		this->Mail = mail;
		this->Biljeske = biljeske;
	}
	void setBrojDosijea(int brojDosijea) {
		this->BrojDosijea = brojDosijea;
	}
	void setIme(string ime) {
		this->Ime = ime;
	}
	void setPrezime(string prezime) {
		this->Prezime = prezime;
	}
	void setImeRoditelja(string imeRoditelja) {
		this->ImeRoditelja = imeRoditelja;
	}
	void setDatumRodjenja(int *datumRodjenja) {
		this->DatumRodjenja = datumRodjenja;
	}
	void setJMBG(int jmbg) {
		this->JMBG = jmbg;
	}
	void setSpol(char spol) {
		this->Spol = spol;
	}
	void setAdresa(string adresa) {
		this->Adresa = adresa;
	}
	void setMjestoPrebivalista(string mjestoPrebivalista) {
		this->MjestoPrebivalista = mjestoPrebivalista;
	}
	void setBrojTelefona(int brojTelefona) {
		this->BrojTelefona = brojTelefona;
	}
	void setMail(string mail) {
		this->Mail = mail;
	}
	void setBiljeske(string biljeske) {
		this->Biljeske = biljeske;
	}

	int getBrojDosijea() {
		return this->BrojDosijea;
	}
	string getIme(string ime) {
		return this->Ime;
	}
	string getPrezime() {
		return this->Prezime;
	}
	string getImeRoditelja() {
		return this->ImeRoditelja;
	}
	int* getDatumRodjenja() {
		return this->DatumRodjenja;
	}
	int getJMBG() {
		return this->JMBG;
	}
	char getSpol() {
		return this->Spol;
	}
	string getAdresa() {
		return this->Adresa;
	}
	string getMjestoPrebivalista() {
		return this->MjestoPrebivalista;
	}
	int getBrojTelefona() {
		return this->BrojTelefona;
	}
	string getMail() {
		return this->Mail;
	}
	string getBiljeske() {
		return this->Biljeske;
	}

	void Info() {
		cout << "Broj dosijea je: " << getBrojDosijea << endl;
		cout << "Ime je: " << getIme << endl;
		cout << "Prezime je: " << getPrezime << endl;
		cout << "Ime roditelja je: " << getImeRoditelja << endl;
		cout << "Datum rodjenja je ";
		for (int i = 0; i < 3; i++)
		{
			cout << getDatumRodjenja()[i];
		}
		cout << endl;
		cout << "JMBG je: " << getJMBG << endl;
		cout << "Spol je :" << getSpol << endl;
		cout << "Adresa je: " << getAdresa << endl;
		cout << "Mjesto prebivalista je: " << endl;
		cout << "Broj telefona je: " << getBrojTelefona << endl;
		cout << "Mail je: " << getMail << endl;
		cout << "Biljeske su: " << getBiljeske << endl;
	}
};