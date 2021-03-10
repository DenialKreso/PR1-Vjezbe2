////Doidavanje igraca ya odredjeni klub,
////Dodavanje Klubova u ligu,
////Dodavanje i mijenjanje informacija o klubu i ligi i plazeru
////9:01
////Edit funkcija ya svaku strukturu
////9 : 02
////kad pretrayujes klub
////9 : 02
////otvori se meni i ponudi
////1 Edit info o klubu
////9 : 03
////Prosirivanje postojecih funkcionalnosti
//#include <iostream>
//using namespace std;
//const int igracDodavanje = 3;
//const int igracEditovanje = 4;
//const int igracPoID = 5;
//const int igracPoImenu = 6;
//const int meniPrekid = 0;
//struct Fudbaler {
//	int ID;
//	string ImePrezime;
//	string Pozicija;
//	int BrojGolova;
//	Fudbaler() {}
//	Fudbaler(int id, string imeprezime, string pozicija, int brojgolova) {
//		this->BrojGolova = brojgolova;
//		this->ID = id;
//		this->ImePrezime = imeprezime;
//		this->Pozicija = pozicija;
//	}
//	void SetId(int id) {
//		this->ID = id;
//	}
//	void SetImePrezime(string imeprezime) {
//		this->ImePrezime = imeprezime;
//	}
//	void SetPozicija(string pozicija) {
//		//uslov:
//		// N, O ili V, duzina smije biti 1 char, upper case;
//		while (pozicija != "N" && pozicija != "V" && pozicija != "O")
//		{
//			cout << "Pozicija nije validna. Unesite novu." << endl;
//			cin >> pozicija;
//		}
//		this->Pozicija = pozicija;
//	}
//	void SetBrojGolova(int brojgolova) {
//		this->BrojGolova = brojgolova;
//	}
//	int GetId() {
//		return this->ID;
//	}
//	string GetImePrezime() {
//		return this->ImePrezime;
//	}
//	string GetPozicija() {
//		return this->Pozicija;
//	}
//	int GetBrojGolova() {
//		return this->BrojGolova;
//	}
//	void Info() {
//		cout << "Igrac ID: " << GetId() << endl;
//		cout << "Ime i prezime igraca: " << GetImePrezime() << endl;
//		cout << "Pozicija igraca: " << GetPozicija() << endl;
//		cout << "Broj golova: " << GetBrojGolova() << endl;
//	}
//};
//struct Klub {
//	string ImeKluba;
//	int TrenutniBrojIgraca = 0;
//	int MaksimalanTrenutniBrojIgraca = 20;
//	Fudbaler* Fudbaleri;
//	Klub() {}
//	Klub(string imekluba) {
//		this->ImeKluba = imekluba;
//		this->Fudbaleri = new Fudbaler[MaksimalanTrenutniBrojIgraca];
//	}
//	void SetImeKluba(string imekluba) {
//		this->ImeKluba = imekluba;
//	}
//	string GetImeKluba() {
//		return this->ImeKluba;
//	}
//	Klub GetDefault() {
//		Klub temp = Klub("default");
//		return temp;
//	}
//	void DodajFudbalera(Fudbaler f) {
//		this->Fudbaleri[TrenutniBrojIgraca - 1] = f;
//	}
//	int GetTrenutniBrojIgraca() {
//		return this->TrenutniBrojIgraca;
//	}
//	void ObrisiZadnjegIgraca() {
//		if (TrenutniBrojIgraca > 0)
//		{
//			this->TrenutniBrojIgraca = TrenutniBrojIgraca - 1;
//		}
//	}
//	Fudbaler TraziFudbalera(int id = 0) {
//		bool NadjenIgrac = false;
//		Fudbaler temp;
//		do
//		{
//			cout << "Unesite ID trazenog igraca: " << endl;
//			cin >> id;
//			for (int i = 0; i < TrenutniBrojIgraca; i++)
//			{
//				if (id == this->Fudbaleri[i].GetId())
//				{
//					temp = this->Fudbaleri[i];
//					NadjenIgrac = true;
//				}
//			}
//		} while (NadjenIgrac == true);
//		return temp;
//	}
//	Fudbaler TraziFudbalera(string imeprezine = "") {
//		bool NadjenIgrac = false;
//		Fudbaler temp;
//		do
//		{
//			cout << "Unesite ID trazenog igraca: " << endl;
//			cin >> imeprezine;
//			for (int i = 0; i < TrenutniBrojIgraca; i++)
//			{
//				if (imeprezine == this->Fudbaleri[i].GetImePrezime())
//				{
//					temp = this->Fudbaleri[i];
//					NadjenIgrac = true;
//				}
//			}
//		} while (NadjenIgrac == true);
//		return temp;
//	}
//	void Info() {
//		cout << endl;
//		cout << "Klub: " << GetImeKluba() << endl;
//		cout << "Broj igraca: " << GetTrenutniBrojIgraca() << endl;
//	}
//};
//struct Liga {
//	string ImeLige;
//	int trenutnoKlubova = 0;
//	int MaksimalanBrojKlubova = 3;
//	Klub* Klubovi = new Klub[MaksimalanBrojKlubova];
//	Liga() {
//	}
//	Liga(string imelige) {
//		this->ImeLige = imelige;
//		Klubovi = new Klub[MaksimalanBrojKlubova];
//	}
//	void DodajKlub(Klub k) {
//		if (trenutnoKlubova < MaksimalanBrojKlubova)
//		{
//			Klubovi[trenutnoKlubova] = k;
//			trenutnoKlubova++;
//		}
//		else {
//			cout << "Ne moze stati vise klubova." << endl;
//		}
//	}
//	Klub TraziKlub(string ime = "") {
//		bool NadjenKlub = false;
//		Klub temp;
//		do
//		{
//			cout << "Unesite ime trazenog kluba: " << endl;
//			cin >> ime;
//			for (int i = 0; i < GetMojaLiga().trenutnoKlubova; i++)
//			{
//				if (ime == GetMojaLiga().Klubovi[i].GetImeKluba())
//				{
//					temp = GetMojaLiga().Klubovi[i];
//					NadjenKlub = true;
//				}
//			}
//		} while (NadjenKlub == true);
//		return temp;
//	}
//	Liga GetMojaLiga() {
//		Liga liga = Liga("Liga1");
//		Klub klub1 = Klub("Klub1");
//		Klub klub2 = Klub("Klub2");
//		Klub klub3 = Klub("Klub3");
//		liga.Klubovi[0] = klub1;
//		liga.Klubovi[1] = klub2;
//		liga.Klubovi[2] = klub3;
//		return liga;
//	}
//};
//void meniIgraci(Klub k) {
//	int odabir;
//	Fudbaler fudbaler;
//	do
//	{
//		cout << "*** MENI IGRACA ***" << endl;
//		cout << "Odaberite 3 za dodavanje novog igraca" << endl;
//		cout << "Odaberite 4 za mjenjanje igraca" << endl;
//		cout << "Odaberite 0 za prekid" << endl;
//		cin >> odabir;
//	} while (odabir != meniPrekid && odabir != igracDodavanje && odabir != igracEditovanje);
//	if (odabir == igracDodavanje)
//	{
//		cout << "Dodajte igraca" << endl;
//	}
//	else if (odabir == igracEditovanje)
//	{
//		do
//		{
//			cout << "*** MENI IGRACA ***" << endl;
//			cout << "Odaberite 5 za pretragu po ID" << endl;
//			cout << "Odaberite 6 za pretragu po imenu i prezimenu" << endl;
//			cout << "Odaberite 0 za prekid" << endl;
//			cin >> odabir;
//		} while (odabir != meniPrekid && odabir != igracPoID && odabir != igracPoImenu);
//		if (odabir == igracPoID)
//		{
//			fudbaler = k.TraziFudbalera(0);
//		}
//		else if (odabir == igracPoImenu) {
//			fudbaler = k.TraziFudbalera("");
//		}
//	}
//}
//void Fudbalmeni() {
//	Liga liga;
//	Klub NadjeniKlub;
//	int odabir;
//	do
//	{
//		cout << "*** MENI ***" << endl;
//		cout << "Odaberite 1 za dodavanje kluba" << endl;
//		cout << "Odaberite 2 za izbor kluba" << endl;
//		cout << "Odaberite 0 za prekid" << endl;
//		cin >> odabir;
//	} while (odabir != 0 && odabir != 1 && odabir != 2);
//	if (odabir == 1)
//	{
//		cout << "Dodajte klub" << endl;
//	}
//	else if (odabir == 2)
//	{
//		NadjeniKlub = liga.GetMojaLiga().TraziKlub();
//	}
//	meniIgraci(NadjeniKlub);
//}
//int main() {
//	meni();
//	//Fudbaler* fudbaler = new Fudbaler(127, "asdf", "O", 0);	fudbaler[0].Info();
//	//Klub* klubovi;
//	//int brojKlubova;
//	//cout << "Unesite broj klubova: ";
//	//cin >> brojKlubova;
//	//klubovi = new Klub[brojKlubova];
//	//for (int i = 0; i < brojKlubova; i++)
//	//{
//	//	string imeKluba;
//	//	int TrenutniBrojIgraca;
//	//	cout << "Unesite ime kluba: ";
//	//	cin >> (imeKluba);
//	//	cout << "Unesite broj igraca: ";
//	//	cin >> TrenutniBrojIgraca;
//	//	Klub novi = Klub(imeKluba, TrenutniBrojIgraca);
//	//	klubovi[i] = novi;
//	//}
//	//klubovi[0].Info();
//	//Fudbaler* fudbaler2 = new Fudbaler(123, "789", "mudo marijanovvo", 123);
//	//fudbaler2->SetId(127);
//	//fudbaler2->SetImePrezime("Adis Sertovic");
//	//fudbaler2->SetBrojGolova(0);
//	//fudbaler2->SetPozicija("O");
//	//fudbaler2->Info();
//	return 0;
//}