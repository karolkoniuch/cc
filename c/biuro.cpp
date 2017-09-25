#include <iostream>
#include <vector> 
#include <string>
#include <fstream>
#include <sys/stat.h>
#include <cstdlib>
#include <windows.h>
#define baza_klientow "baza_klientow.txt"
#define baza_mieszkann "baza_mieszkan.txt"
#define baza_domoww "baza_domow.txt"
#define baza_dzialekk "baza_dzialek.txt"
#define baza_zamowienn "baza_zamowien.txt"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Nieruchomosc{
   
    int idN, idZ;
    string xMiejscowosc;
    float xCena;
    string xOpis;
    public:
    	Nieruchomosc(){
    		xMiejscowosc = "";
    		xCena = 0;
    		xOpis = "";
		}
		string GetMiejscowosc(){
			return xMiejscowosc;
		}
		void SetMiejscowosc(string Miejscowosc){
			xMiejscowosc = Miejscowosc;
		}
		float GetCena(){
			return xCena;
		}
		void SetCena(float Cena){
			xCena = Cena;
		}
		string GetOpis(){
			return xOpis;
		}
		void SetOpis(string Opis){
			xOpis = Opis;
		}
		int GetID(){
			return idN;
		}
		void SetID(int IDn){
			idN=IDn;
		}
		int GetID2(){
			return idZ;
		}
		void SetID2(int IDn){
			idZ=IDn;
		}

};
 
class Mieszkanie:public Nieruchomosc{
    int xLiczbaPokoi;
    int xPietro;
    public:
    	Mieszkanie(string sMiejscowosc, float sCena, string sOpis, int sLiczbaPokoi, int sPietro, int ID, int ID2){
    		SetMiejscowosc(sMiejscowosc);
    		SetCena(sCena);
    		SetOpis(sOpis);
    		xLiczbaPokoi = sLiczbaPokoi;
    		xPietro = sPietro;
    		SetID(ID);
    		SetID2(ID2);
		}
		int GetLiczbaPokoi(){
			return xLiczbaPokoi;
		}
		void SetLiczbaPokoi(int LiczbaPokoi){
			xLiczbaPokoi = LiczbaPokoi;
		}
		int GetPietro(){
			return xPietro;
		}
		void SetPietro(int Pietro){
			xPietro = Pietro;
		}
		
};
 
class Dom:public Nieruchomosc{
    int xLiczbaPokoi;
    int xLiczbaKondygnacji;
    public:
    	Dom(string sMiejscowosc, float sCena, string sOpis, int sLiczbaPokoi, int sLiczbaKondygnacji, int ID, int ID2){
    		SetMiejscowosc(sMiejscowosc);
    		SetCena(sCena);
    		SetOpis(sOpis);
    		xLiczbaPokoi = sLiczbaPokoi;
    		xLiczbaKondygnacji = sLiczbaKondygnacji;
    		SetID(ID);
    		SetID2(ID2);
		}
		int GetLiczbaPokoi(){
			return xLiczbaPokoi;
		}
		void SetLiczbaPokoi(int LiczbaPokoi){
			xLiczbaPokoi = LiczbaPokoi;
		}
		int GetLiczbaKondygnacji(){
			return xLiczbaKondygnacji;
		}
		void SetLiczbaKondygnacji(int LiczbaKondygnacji){
			xLiczbaKondygnacji = LiczbaKondygnacji;
		}
};
 
class Dzialka:public Nieruchomosc{
    string xPrzeznaczenieDzialki;
    float xPowierzchniaDzialki;
    public:
    	Dzialka(string sMiejscowosc, float sCena, string sOpis, string sPrzeznaczenieDzialki, float sPowierzchniaDzialki, int ID, int ID2){
    		SetMiejscowosc(sMiejscowosc);
    		SetCena(sCena);
    		SetOpis(sOpis);
    		xPrzeznaczenieDzialki = sPrzeznaczenieDzialki;
    		xPowierzchniaDzialki = sPowierzchniaDzialki;
    		SetID(ID);
    		SetID2(ID2);
		}
		string GetPrzeznaczenieDzialki(){
			return xPrzeznaczenieDzialki;
		}
		void SetPrzeznaczenieDzialki(string sPrzeznaczenieDzialki){
			xPrzeznaczenieDzialki = sPrzeznaczenieDzialki;
		}
		float GetPowierzchniaDzialki(){
			return xPowierzchniaDzialki;
		}
		void SetPowierzchniaDzialki(float sPowierzchniaDzialki){
			xPowierzchniaDzialki = sPowierzchniaDzialki;
		}
};
 
class Zamowienie{
	int idZ;
    float data;
	int rodzaj;
	string login;
	Nieruchomosc obN;
	public:
		Zamowienie(float fData, int iRodzaj, string loginuseer, int sidZ)
		{
			data=fData;
			rodzaj=iRodzaj;
			idZ=sidZ;
			login=loginuseer;
		}
		int GetID()
		{
			return idZ;
		}
		void SetID(int sidZ)
 	    {
 	  		idZ=sidZ;
 	    }
		string GetLogin()
		{
			return login;
		}
		void SetLogin(string hes)
 	    {
 	  		login=hes;
 	    }
	    float GetData()
	    {
	    	return data;
		}
		void SetData(float fData)
		{
			data=fData;
		}
		int GetRodzaj()
		{
			return rodzaj;
		}
		void SetRodzaj(int iRodzaj)
		{
			rodzaj=iRodzaj;
		}
};
 
class Klient{
    string imie,login,passwd,nazwisko;
    float portfel;
    int idK;
    public:
    	Klient(string sImie, string sNazwisko, string sLogin, string sPasswd, float sPortfel, int sidK){
    		imie = sImie;
    		nazwisko = sNazwisko;
    		login = sLogin;
    		passwd = sPasswd;
    		portfel = sPortfel;
    		idK = sidK;
		}
		string GetImie(){
			return imie;
		}
		void SetImie(string sImie){
			imie = sImie;
		}
		string GetNazwisko(){
			return nazwisko;
		}
		void SetNazwisko(string sNazwisko){
			nazwisko = sNazwisko;
		}
		string GetLogin(){
			return login;
		}
		void SetLogin(string sLogin){
			login = sLogin;
		}
		string GetPasswd(){
			return passwd;
		}
		void SetPasswd(string sPasswd){
			passwd = sPasswd;
		}
		float GetPortfel(){
			return portfel;
		}
		void SetPortfel(float sPortfel){
			portfel = sPortfel;
		}
		int GetID(){
			return idK;
		}
		void SetID(int sidK){
			idK = sidK;
		}
 
};

bool fileExists(const string& filename)
{
    struct stat buf;
    if (stat(filename.c_str(), &buf) != -1)
    {
        return true;
    }
    return false;
}

vector < Klient > klient;
vector < Mieszkanie > mieszkanie;
vector < Dom > dom;
vector < Dzialka > dzialka;
vector < Zamowienie > zamowienie;
    
string sRodzaj,sData,sBool,sImie, sNazwisko, sMiejscowosc, sOpis, sCena, sLiczbaPokoi, sPietro, sLiczbaKondygnacji, sPrzeznaczenieDzialki, sPowierzchniaDzialki, sPortfel, sIDk, sIDk2, sLogin, sPasswd;
float Portfel, Cena, Powierzchnia,fData,data;
int x1,x2,x3,x4;
int flag=0,sidZ;
int ModifyUser;
bool bRodzaj;
int IDk, IDk2, LiczbaPokoi, Pietro, Kondygnacji;
string ZmienImie, ZmienNazwisko, login, passwd;


void SaveKlient() // ZAPISUJE CALY WEKTOR KLIENTOW DO PLIKU
{
	fstream baza_klient;
	baza_klient.open(baza_klientow, ios::out);
	if(baza_klient.good())
	{
		for(int i=0; i < klient.size(); i++)
		{
			if(i==klient.size()-1)
			{
				baza_klient << klient[i].GetImie() << "|" << klient[i].GetNazwisko() << "|" << klient[i].GetLogin() << "|" << klient[i].GetPasswd() << "|" << klient[i].GetPortfel() << "|" << klient[i].GetID();
			}
			else
			{
				baza_klient << klient[i].GetImie() << "|" << klient[i].GetNazwisko() << "|" << klient[i].GetLogin() << "|" << klient[i].GetPasswd() << "|" << klient[i].GetPortfel() << "|" << klient[i].GetID() << endl;
			}
											
		}
	}
	baza_klient.close();
}
void SaveZamowienie() // ZAPISUJE CALY WEKTOR ZAMOWIEN DO PLIKU
{
	fstream baza_zamowien;
	baza_zamowien.open(baza_zamowienn, ios::out);
	if(baza_zamowien.good())
	{
		for(int i=0; i < zamowienie.size(); i++)
		{
			if(i==zamowienie.size()-1)
			{
				baza_zamowien << zamowienie[i].GetData() << "|" << zamowienie[i].GetRodzaj() << "|" << zamowienie[i].GetLogin() << "|" << zamowienie[i].GetID();
			}
			else
			{
				baza_zamowien << zamowienie[i].GetData() << "|" << zamowienie[i].GetRodzaj() << "|" << zamowienie[i].GetLogin() << "|" << zamowienie[i].GetID() << endl;
			}
											
		}
	}
	baza_zamowien.close();
}
void SaveMieszkanie() // ZAPISUJE CALY WEKTOR MIESZKAN DO PLIKU
{
	fstream baza_mieszkan;
	baza_mieszkan.open(baza_mieszkann, ios::out);
	if(baza_mieszkan.good())
	{
		for(int i=0; i < mieszkanie.size(); i++)
		{
			if(i==mieszkanie.size()-1)
			{
				baza_mieszkan << mieszkanie[i].GetMiejscowosc() << "|" << mieszkanie[i].GetCena() << "|" << mieszkanie[i].GetOpis() << "|" << mieszkanie[i].GetLiczbaPokoi() << "|" << mieszkanie[i].GetPietro() << "|" << mieszkanie[i].GetID() << "|" << mieszkanie[i].GetID2();
			}
			else
			{
				baza_mieszkan << mieszkanie[i].GetMiejscowosc() << "|" << mieszkanie[i].GetCena() << "|" << mieszkanie[i].GetOpis() << "|" << mieszkanie[i].GetLiczbaPokoi() << "|" << mieszkanie[i].GetPietro() << "|" << mieszkanie[i].GetID() << "|" << mieszkanie[i].GetID2() << endl;
			}
											
		}
	}
	baza_mieszkan.close();
}
void SaveDom() // ZAPISUJE CALY WEKTOR DOMOW DO PLIKU
{
	fstream baza_domow;
	baza_domow.open(baza_domoww, ios::out);
	if(baza_domow.good())
	{
		for(int i=0; i < dom.size(); i++)
		{
			if(i==dom.size()-1)
			{
				baza_domow << dom[i].GetMiejscowosc() << "|" << dom[i].GetCena() << "|" << dom[i].GetOpis() << "|" << dom[i].GetLiczbaPokoi() << "|" << dom[i].GetLiczbaKondygnacji() << "|" << dom[i].GetID() << "|" << dom[i].GetID2();
			}
			else
			{
				baza_domow << dom[i].GetMiejscowosc() << "|" << dom[i].GetCena() << "|" << dom[i].GetOpis() << "|" << dom[i].GetLiczbaPokoi() << "|" << dom[i].GetLiczbaKondygnacji() << "|" << dom[i].GetID() << "|" << dom[i].GetID2() << endl;
			}
											
		}
	}
	baza_domow.close();
}
void SaveDzialka() // ZAPISUJE CALY WEKTOR DZIALEK DO PLIKU
{
	fstream baza_dzialek;
	baza_dzialek.open(baza_dzialekk, ios::out);
	if(baza_dzialek.good())
	{
		for(int i=0; i < dzialka.size(); i++)
		{
			if(i==dzialka.size()-1)
			{
				baza_dzialek << dzialka[i].GetMiejscowosc() << "|" << dzialka[i].GetCena() << "|" << dzialka[i].GetOpis() << "|" << dzialka[i].GetPrzeznaczenieDzialki() << "|" << dzialka[i].GetPowierzchniaDzialki() << "|" << dzialka[i].GetID() << "|" << dzialka[i].GetID2();
			}
			else
			{
				baza_dzialek << dzialka[i].GetMiejscowosc() << "|" << dzialka[i].GetCena() << "|" << dzialka[i].GetOpis() << "|" << dzialka[i].GetPrzeznaczenieDzialki() << "|" << dzialka[i].GetPowierzchniaDzialki() << "|" << dzialka[i].GetID() << "|" << dzialka[i].GetID2() << endl;
			}
											
		}
	}
	baza_dzialek.close();
}
void UsunMieszkania(int ID) // USUWA WSZYSTKIE MIESZKANIA DANEGO ID (W TYM WYPADKU KLIENTA)
{
	int b=0;
	int size = mieszkanie.size();
	for(int i=0; i < size; i++)
	{
		if(mieszkanie[b].GetID() == ID)
		{
			if(b>0)
			{
				mieszkanie.erase(mieszkanie.begin() + b);
			}
			else
			{
				mieszkanie.erase(mieszkanie.begin());
			}
		}
		else
		{
			b++;
		}
	}
}
void UsunDomy(int ID) // USUWA WSZYSTKIE DOMY DANEGO ID (W TYM WYPADKU KLIENTA)
{
	int b=0;
	int size = dom.size();
	for(int i=0; i < size; i++)
	{
		if(dom[b].GetID() == ID)
		{
			if(b>0)
			{
				dom.erase(dom.begin() + b);
			}
			else
			{
				dom.erase(dom.begin());
			}
		}
		else
		{
			b++;
		}
	}
}
void UsunDzialki(int ID) // USUWA WSZYSTKIE DZIALKI DANEGO ID (W TYM WYPADKU KLIENTA)
{
	int b=0;
	int size = dzialka.size();
	for(int i=0; i < size; i++)
	{
		if(dzialka[b].GetID() == ID)
		{
			if(b>0)
			{
				dzialka.erase(dzialka.begin() + b);
			}
			else
			{
				dzialka.erase(dzialka.begin());
			}
		}
		else
		{
			b++;
		}
	}
}
void UsunKlienta(int user) // USUWA DANEGO KLIENTA ORAZ JEGO NIERUCHOMOSCI(W WEKTORZE JAK I W PLIKU), POTEM AKTUALIZUJE PLIKI 
{
	int ID = klient[user].GetID();
	if(user==0)
	{
		klient.erase(klient.begin());
	}
	else
	{
		klient.erase(klient.begin() + user);
	}
	SaveKlient();
	UsunMieszkania(ID);
	SaveMieszkanie();
	UsunDomy(ID);
	SaveDom();
	UsunDzialki(ID);
	SaveDzialka();
}
bool KlientEmpty() // SPRAWDZA CZY PLIK KLIENTOW JEST PUSTY, ZWRACA TRUE JESLI JEST PUSTY
{	
	if(ifstream(baza_klientow, ios::ate).tellg())
	{									
		return false;
	}
	else
	{
		return true;
	}
}
bool MieszkanieEmpty() // SPRAWDZA CZY PLIK MIESZKAN JEST PUSTY, ZWRACA TRUE JESLI PUSTY
{	
	if(ifstream(baza_mieszkann, ios::ate).tellg())
	{									
		return false;
	}
	else
	{
		return true;
	}
}
bool ZamowienieEmpty() // SPRAWDZA CZY PLIK ZAMOWIEN JEST PUSTY, ZWRACA TRUE JESLI PUSTY
{	
	if(ifstream(baza_zamowienn, ios::ate).tellg())
	{									
		return false;
	}
	else
	{
		return true;
	}
}
bool DomEmpty() // SPRAWDZA CZY PLIK DOMOW JEST PUSTY, ZWRACA TRUE JESLI PUSTY
{	
	if(ifstream(baza_domoww, ios::ate).tellg())
	{									
		return false;
	}
	else
	{
		return true;
	}
}
bool DzialkaEmpty() // SPRAWDZA CZY PLIK DZIALEK JEST PUSTY, ZWRACA TRUE JESLI PUSTY
{	
	if(ifstream(baza_dzialekk, ios::ate).tellg())
	{									
		return false;
	}
	else
	{
		return true;
	}
}
int NextIDClient() // ZWRACA NASTEPNY ID JAKI MA BYC UZYWANY PODCZAS TWORZENIA NOWEGO KLIENTA
{
	int temp=1;
	for(int i=0; i < klient.size(); i++)
	{
		if(klient[i].GetID() >= temp)
		{
			temp = klient[i].GetID();
		}
		
	}
	if(temp==1 && klient.size()<1){
		return temp;
	}
	else
	{
		return temp+1;
	}
}
int NextIDZamowienia() // ZWRACA NASTEPNY ID JAKI MA BYC UZYWANY PODCZAS TWORZENIA NOWEGO ZAMOWIENIA
{
	int temp=1;
	for(int i=0; i < zamowienie.size(); i++)
	{
		if(zamowienie[i].GetID() >= temp)
		{
			temp = zamowienie[i].GetID();
		}
		
	}
	if(temp==1 && klient.size()<1){
		return temp;
	}
	else
	{
		return temp+1;
	}
}
void UsunZamowienie(int idZamowienia)
{
	int id = zamowienie[idZamowienia].GetID();
	for(int i=0;i<mieszkanie.size();i++)
	{
		if(mieszkanie[i].GetID2()==id)
		{
			mieszkanie[i].SetID(0);
			mieszkanie[i].SetID2(0);
		}
	}
	SaveMieszkanie();
	for(int i=0;i<dom.size();i++)
	{
		if(dom[i].GetID2()==id)
		{
			dom[i].SetID(0);
			dom[i].SetID2(0);
		}
	}
	SaveDom();
	for(int i=0;i<dzialka.size();i++)
	{
		if(dzialka[i].GetID2()==id)
		{
			dzialka[i].SetID(0);
			dzialka[i].SetID2(0);	
		}
	}
	SaveDzialka();
	if(idZamowienia==0)
	{
		zamowienie.erase(zamowienie.begin());
	}
	else
	{
		zamowienie.erase(zamowienie.begin() + idZamowienia);
	}
	SaveZamowienie();
}
void DaneZamowienia(string loginuser, int idZamowienia) // ZWRACA NASTEPNY ID JAKI MA BYC UZYWANY PODCZAS TWORZENIA NOWEGO ZAMOWIENIA
{
	int r,x,id_klienta;
	for(int i=0;i<klient.size();i++)
	{
		if(klient[i].GetLogin()==loginuser)
		{
			id_klienta = i;
		}
	}
	for(int i=0;i<mieszkanie.size();i++)
	{
		if(mieszkanie[i].GetID2()==idZamowienia)
		{
			r=1;
			x=i;
		}
	}
	for(int i=0;i<dom.size();i++)
	{
		if(dom[i].GetID2()==idZamowienia)
		{
			r=2;
			x=i;
		}
	}
	for(int i=0;i<dzialka.size();i++)
	{
		if(dzialka[i].GetID2()==idZamowienia)
		{
			r=3;
			x=i;	
		}
	}
	//cout << "r - " << r << " " << "x - " << x;
	cout << "Nabywca: " << klient[id_klienta].GetImie() << " " << klient[id_klienta].GetNazwisko() << endl;
	if(r==1)
	{
		cout << r << "Miasto: "<< mieszkanie[x].GetMiejscowosc() << " Cena: " << mieszkanie[x].GetCena() << endl << "Liczba pokoi: " << mieszkanie[x].GetLiczbaPokoi() << " Pietro: " << mieszkanie[x].GetPietro() << endl;
	}
	else if(r==2)
	{
		cout << r << "Miasto: "<< dom[x].GetMiejscowosc() << " Cena: " << dom[x].GetCena() << endl << "Liczba pokoi: " << dom[x].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[x].GetLiczbaKondygnacji() << endl;
	}
	else
	{
		cout << r << "Miasto: "<< dzialka[x].GetMiejscowosc() << " Cena: " << dzialka[x].GetCena() << endl << "Przeznaczenie dzialki: " << dzialka[x].GetPrzeznaczenieDzialki() << endl << "Powierzchnia [m2]: " << dzialka[x].GetPowierzchniaDzialki() << endl;
	}
}
void LoadKlient() // WCZYTUJE KLIENTOW Z PLIKU ORAZ ZAPISUJE DO WEKTORA
{
	fstream baza_klient;
    if (fileExists(baza_klientow) == true)
	{
    	baza_klient.open(baza_klientow, ios::in);
    	if(baza_klient.good() == true && KlientEmpty()==false)
		{
 			while(true)
    		{
				if (baza_klient.eof()) break;
				getline(baza_klient,sImie,'|');
			    getline(baza_klient,sNazwisko,'|');
			    getline(baza_klient,sLogin,'|');
			    getline(baza_klient,sPasswd,'|');
			    getline(baza_klient,sPortfel,'|');
		        getline(baza_klient,sIDk);
			    klient.push_back(Klient(sImie,sNazwisko,sLogin,sPasswd,atof(sPortfel.c_str()),atoi(sIDk.c_str())));
    		}
    		baza_klient.close();
		}
	}
	else
	{
		baza_klient.open(baza_klientow, ios::out);
	}
}
void AddKlient(string sImie, string sNazwisko, string sLogin, string sPasswd, float Portfel, int IDk) // DODAJE KLIENTA NA KONIEC PLIKU
{
	fstream baza_klient;
	baza_klient.open(baza_klientow, ios::app);
	if(baza_klient.good())
	{
		if(KlientEmpty()==false)
		{
			baza_klient << endl << sImie << "|" << sNazwisko << "|" << sLogin << "|" << sPasswd << "|" << Portfel << "|" << IDk;
		}
		else
		{
			baza_klient << sImie << "|" << sNazwisko << "|" << sLogin << "|" << sPasswd << "|" << Portfel << "|" << IDk;
		}
   		baza_klient.close();
	}
}
void AddMieszkanie(string sMiejscowosc, float Cena, string sOpis, int LiczbaPokoi, int Pietro, int IDk, int IDk2) // DODAJE MIESZKANIE NA KONIEC PLIKU
{
	fstream baza_mieszkan;
	baza_mieszkan.open(baza_mieszkann, ios::app);
	if(baza_mieszkan.good())
	{
		if(MieszkanieEmpty()==false)
		{
			baza_mieszkan << endl << sMiejscowosc << "|" << Cena << "|" << sOpis << "|" << LiczbaPokoi << "|" << Pietro << "|" << IDk << "|" << IDk2;
		}
		else
		{
			baza_mieszkan << sMiejscowosc << "|" << Cena << "|" << sOpis << "|" << LiczbaPokoi << "|" << Pietro << "|" << IDk << "|" << IDk2;
		}
		baza_mieszkan.close();
	}
}
void AddZamowienie(float Data, int rodzaj, string loginuser, int IDn) // DODAJE ZAMOWIENIE NA KONIEC PLIKU
{
	fstream baza_zamowien;
	baza_zamowien.open(baza_zamowienn, ios::app);
	if(baza_zamowien.good())
	{
		if(ZamowienieEmpty()==false)
		{
			baza_zamowien << endl << Data << "|" << rodzaj << "|" << loginuser << "|" << IDn;
		}
		else
		{
			baza_zamowien << Data << "|" << rodzaj << "|" << loginuser << "|" << IDn;
		}
		baza_zamowien.close();
	}
}
void AddDom(string sMiejscowosc, float Cena, string sOpis, int LiczbaPokoi, int Kondygnacji, int IDk, int IDk2) // DODAJE DOM NA KONIEC PLIKU
{
	fstream baza_domow;
	baza_domow.open(baza_domoww, ios::app);
	if(baza_domow.good())
	{
		if(DomEmpty()==false)
		{
			baza_domow << endl << sMiejscowosc << "|" << Cena << "|" << sOpis << "|" << LiczbaPokoi << "|" << Kondygnacji << "|" << IDk << "|" << IDk2;
		}
		else
		{
			baza_domow << sMiejscowosc << "|" << Cena << "|" << sOpis << "|" << LiczbaPokoi << "|" << Kondygnacji << "|" << IDk << "|" << IDk2;
		}
		baza_domow.close();
	}
}
void AddDzialka(string sMiejscowosc, float Cena, string sOpis, string sPrzeznaczenieDzialki, float Powierzchnia, int IDk, int IDk2) // DODAJE DZIALKE NA KONIEC PLIKU
{
	fstream baza_dzialek;
	baza_dzialek.open(baza_dzialekk, ios::app);
	if(baza_dzialek.good())
	{
		if(DzialkaEmpty()==false)
		{
			baza_dzialek << endl << sMiejscowosc << "|" << Cena << "|" << sOpis << "|" << sPrzeznaczenieDzialki << "|" << Powierzchnia << "|" << IDk << "|" << IDk2;
		}
		else
		{
			baza_dzialek << sMiejscowosc << "|" << Cena << "|" << sOpis << "|" << sPrzeznaczenieDzialki << "|" << Powierzchnia << "|" << IDk << "|" << IDk2;
		}
	baza_dzialek.close();
	}
}
void LoadMieszkanie() // WCZYTUJE MIESZKANIA Z PLIKU ORAZ ZAPISUJE DO WEKTORA
{
    fstream baza_mieszkan;
    if (fileExists(baza_mieszkann) == true)
	{
    	baza_mieszkan.open(baza_mieszkann, ios::in);
    	if(baza_mieszkan.good() == true && MieszkanieEmpty()==false)
		{
 			while(true)
    		{
				if (baza_mieszkan.eof()) break;
				getline(baza_mieszkan,sMiejscowosc,'|');
			    getline(baza_mieszkan,sCena,'|');
			    getline(baza_mieszkan,sOpis,'|');
			    getline(baza_mieszkan,sLiczbaPokoi,'|');
			    getline(baza_mieszkan,sPietro,'|');
			    getline(baza_mieszkan,sIDk,'|');
			    getline(baza_mieszkan,sIDk2);
			    mieszkanie.push_back(Mieszkanie(sMiejscowosc, atof(sCena.c_str()), sOpis, atoi(sLiczbaPokoi.c_str()), atoi(sPietro.c_str()),atoi(sIDk.c_str()),atoi(sIDk2.c_str())));
    		}
    		baza_mieszkan.close();
		}
	}
	else
	{
		baza_mieszkan.open(baza_mieszkann, ios::out);
	}
}
void LoadZamowienie() // WCZYTUJE ZAMOWIENIA Z PLIKU ORAZ ZAPISUJE DO WEKTORA
{
    fstream baza_zamowien;
    if (fileExists(baza_zamowienn) == true)
	{
    	baza_zamowien.open(baza_zamowienn, ios::in);
    	if(baza_zamowien.good() == true && ZamowienieEmpty()==false)
		{
 			while(true)
    		{
				if (baza_zamowien.eof()) break;
				getline(baza_zamowien,sData,'|');
			    getline(baza_zamowien,sRodzaj,'|');
			    getline(baza_zamowien,sIDk,'|');
			    getline(baza_zamowien,sIDk2);
			    zamowienie.push_back(Zamowienie(atof(sData.c_str()), atoi(sRodzaj.c_str()), sIDk,atoi(sIDk2.c_str())));
    		}
    		baza_zamowien.close();
		}
	}
	else
	{
		baza_zamowien.open(baza_zamowienn, ios::out);
	}
}
void LoadDom() // WCZYTUJE DOMY Z PLIKU ORAZ ZAPISUJE DO WEKTORA
{
	fstream baza_domow;
    if (fileExists(baza_domoww) == true)
	{
    	baza_domow.open(baza_domoww, ios::in);
    	if( baza_domow.good() == true && DomEmpty()==false)
		{
 			while(true)
    		{
			    if (baza_domow.eof()) break;
			    getline(baza_domow,sMiejscowosc,'|');
			    getline(baza_domow,sCena,'|');
			    getline(baza_domow,sOpis,'|');
			    getline(baza_domow,sLiczbaPokoi,'|');
			    getline(baza_domow,sLiczbaKondygnacji,'|');
			    getline(baza_domow,sIDk,'|');
			    getline(baza_domow,sIDk2);
			    dom.push_back(Dom(sMiejscowosc, atof(sCena.c_str()), sOpis, atoi(sLiczbaPokoi.c_str()), atoi(sLiczbaKondygnacji.c_str()),atoi(sIDk.c_str()),atoi(sIDk2.c_str())));
    		}
    		baza_domow.close();
		}
	}
	else
	{
		baza_domow.open(baza_domoww, ios::out);
	}
}
void LoadDzialka() // WCZYTUJE DZIALKI Z PLIKU ORAZ ZAPISUJE DO WEKTORA
{
	fstream baza_dzialek;
    if (fileExists(baza_dzialekk) == true)
	{
    	baza_dzialek.open(baza_dzialekk, ios::in);
    	if(baza_dzialek.good() == true && DzialkaEmpty()==false)
		{
 			while(true)
    		{
			    if (baza_dzialek.eof()) break;
			    getline(baza_dzialek,sMiejscowosc,'|');
			    getline(baza_dzialek,sCena,'|');
			    getline(baza_dzialek,sOpis,'|');
			    getline(baza_dzialek,sPrzeznaczenieDzialki,'|');
			    getline(baza_dzialek,sPowierzchniaDzialki,'|');
			    getline(baza_dzialek,sIDk,'|');
			    getline(baza_dzialek,sIDk2);
			    dzialka.push_back(Dzialka(sMiejscowosc, atof(sCena.c_str()), sOpis, sPrzeznaczenieDzialki, atof(sPowierzchniaDzialki.c_str()),atoi(sIDk.c_str()),atoi(sIDk2.c_str())));
    		}
    		baza_dzialek.close();
		}
	}
	else
	{
		baza_dzialek.open(baza_dzialekk, ios::out);
	}
}
bool Logowanie(string login, string passwd)
{
	for(int i=0; i < klient.size();i++)
	{
		if(klient[i].GetLogin() == login && klient[i].GetPasswd() == passwd)
		{
			return true;
		}
	}
	return false;
}
bool LoginUsed(string login) // ZWRACA TRUE JESLI LOGIN JEST ZAJETY
{
	int x=1;
	for (int i=0; i < klient.size();i++)
	{
		if(klient[i].GetLogin()==login)
		{
			x=0;
		}
	}
	if(x==0)
	{
		return true;
	}
}
int GetMoneyFromLogin(string sLogin)
{
	for(int i=0;i<klient.size();i++)
	{
		if(klient[i].GetLogin()==sLogin)
		{
			return klient[i].GetPortfel();
		}
	}	
}
int GetIDFromLogin(string sLogin)
{
	for(int i=0;i<klient.size();i++)
	{
		if(klient[i].GetLogin()==sLogin)
		{
			return klient[i].GetID();
		}
	}	
}
void DelMoney(string sLogin, int xcena)
{
	for(int i=0;i<klient.size();i++)
	{
		if(klient[i].GetLogin()==sLogin)
		{
			klient[i].SetPortfel(klient[i].GetPortfel()-xcena);
		}
	}	
}
int main(int argc, char** argv) {

    

    /*******************TWORZENIE PLIKU BADZ ODCZYTYWANIE ISTNIEJACEGO DLA KAZDEGO WEKTORA*************/
	LoadKlient();
	LoadMieszkanie();
	LoadDom();
	LoadDzialka();
	LoadZamowienie();
    /*******************KONIEC ODCZYTYWANIA / POCZATEK MENU**************************************/


    while(true)
    {
    	start:
    	system("cls");
    	cout << "1. Logowanie" << endl << "2. Zarejestruj sie" << endl;
    	cin >> x1;
	    if(x1==1)
	    	{
	    		system("cls");
	    		cout << "Podaj login : "; cin >> login;
	    		cout << "Podaj haslo : "; cin >> passwd;
	    		if(Logowanie(login,passwd)==true)
	    		{
	    			break;
				}
				else
				{
					system("cls");
					cout << "Nie znaleziono konta! Zaloguj sie ponownie lub stworz nowe konto.." << endl;
					Sleep(3500);
				}
			}
			else if(x1==2)
			{
				system("cls");
				cout << "Podaj imie: ";
				cin >> sImie;
				cout << "Podaj nazwisko: ";
				cin >> sNazwisko;
				again:
				cout << "Podaj login: ";
				cin >> login;
				if(LoginUsed(login)==true)
				{
					cout << "Login zajety! Wybierz nowy.." << endl;
					goto again;
				}
				cout << "Podaj haslo: ";
				cin >> passwd;
				cout << "Podaj ile pieniedzy przypisac do konta[ZL]: ";
				cin >> Portfel;
				IDk = NextIDClient();
				klient.push_back(Klient(sImie,sNazwisko,login,passwd,Portfel,IDk));
				AddKlient(sImie,sNazwisko,login,passwd,Portfel,IDk);
				system("cls");
				cout << "Konto zarejestrowano! Za chwile zostaniesz automatycznie zalogowany..";
				Sleep(3500);
				break;
			}		
	}
    while(true)
    {
    	if(login=="admin")
		{
			flag=0;
			system("cls");
			cout << "Zalogowany jako [ " << login << " ]" << endl;
			cout << "1. Zarzadzanie klientami" << endl << "2. Zarzadzanie nieruchomosciami" << endl << "3. Zarzadzanie zamowieniami" << endl << "4. Statystyki" << endl << "5. Wyswietl" << endl;
			cin >> x1;
			switch(x1)
				{
					case 1:
						{
						system("cls");
						cout << "1. Dodaj klienta" << endl << "2. Modyfikuj klienta" << endl << "3. Usun klienta" << endl << "4. Powrot do menu" << endl;
						cin >> x2;
							switch(x2)
							{
								case 1:
									{
										system("cls");
										cout << "Podaj imie: ";
										cin >> sImie;
										cout << "Podaj nazwisko: ";
										cin >> sNazwisko;
										cout << "Podaj login: ";
										cin >> sLogin;
										cout << "Podaj haslo: ";
										cin >> sPasswd;
										cout << "Podaj ile pieniedzy przypisac do konta[ZL]: ";
										cin >> Portfel;
										IDk = NextIDClient();
										klient.push_back(Klient(sImie,sNazwisko,sLogin,sPasswd,Portfel,IDk));
										AddKlient(sImie,sNazwisko,sLogin,sPasswd,Portfel,IDk);
									}
								break;
								case 2:
									{
										system("cls");
										if (klient.empty())
										{
											cout << "Nie ma kogo modyfikowac.. Powrot do menu za kilka sekund";
											Sleep(3500);
										}	
										else
										{
											for(int i=0; i < klient.size(); i++)
											{
												cout << i << ". "<< klient[i].GetImie() << " " << klient[i].GetNazwisko() << endl;
											}
											cout << "Kogo chcesz modyfikowac? - ";
											cin >> ModifyUser;
											system("cls");
											cout << "Wprowadz nowe imie: ";
											cin >> ZmienImie;
											cout << "Wprowadz nowe nazwisko: ";
											cin >> ZmienNazwisko;
											cout << "Wprowadz nowy login: ";
											cin >> login;
											cout << "Wprowadz nowe haslo: ";
											cin >> passwd;
											cout << "Ile przypisac pieniedzy do konta[ZL]: ";
											cin >> Portfel;
											klient[ModifyUser].SetImie(ZmienImie);
											klient[ModifyUser].SetNazwisko(ZmienNazwisko);
											klient[ModifyUser].SetLogin(login);
											klient[ModifyUser].SetPasswd(passwd);
											klient[ModifyUser].SetPortfel(Portfel);
											SaveKlient();
										}
									}
								break;
								case 3:
									{
										if (klient.empty())
										{
											cout << "Nie ma kogo usuwac.. Powrot do menu za kilka sekund";
											Sleep(3500);
										}
										else
										{
											system("cls");
											for(int i=0; i < klient.size(); i++)
											{
												if(klient[i].GetLogin()!="admin")
												{
													cout << i << ". " << "UZYTKOWNIK - " << klient[i].GetImie() << " " << klient[i].GetNazwisko() << endl;
												}
												else
												{
													cout << i << ". " << "ADMIN - " << klient[i].GetImie() << " " << klient[i].GetNazwisko() << endl;
												}
											}
											cout << "Kogo chcesz usunac? - ";
											cin >> ModifyUser;
											system("cls");
											cout << "Usuniecie klienta wiaze sie z utrata wszystkich jego nieruchomosci" << endl;
											cout << "[ [T/t] - usuwa klienta, [N/n] - anuluje usuwanie ]" << endl;
											cin >> sOpis;
											string status=klient[ModifyUser].GetLogin();
											if(sOpis == "T" || sOpis == "t")
											{
												
												UsunKlienta(ModifyUser);
												if(status=="admin")
												{
													goto start;
												}
											}
										}
									}
								break;

							}
						}
					break;
					case 2:
					{
						system("cls");
						cout << "1. Dodaj nieruchomosc" << endl << "2. Modyfikuj nieruchomosc" << endl << "3. Usun nieruchomosc" << endl << "4. Powrot do menu" << endl;
						cin >> x3;
						switch(x3)
						{
							case 1:
								{
									system("cls");
									cout << "1. Mieszkanie" << endl << "2. Dom" << endl << "3. Dzialka" << endl;
									cout << "Jaka nieruchomosc chcesz dodac? - ";
									cin >> x4;
									switch(x4)
									{
										case 1:
											{
												system("cls");
												cout << "Podaj miejscowosc: "; cin >> sMiejscowosc;
												cout << "Podaj cene: "; cin >> Cena;
												cout << "Podaj opis: "; cin.ignore(); getline(cin,sOpis);
	         								    cout << "Podaj liczbe pokoi: "; cin >> LiczbaPokoi;
	         								    cout << "Podaj pietro: "; cin >> Pietro;
	         								    IDk = 0;
	         								    IDk2 = 0;
												mieszkanie.push_back(Mieszkanie(sMiejscowosc,Cena,sOpis,LiczbaPokoi,Pietro,IDk,IDk2));
												AddMieszkanie(sMiejscowosc,Cena,sOpis,LiczbaPokoi,Pietro,IDk,IDk2);
											}
										break;
										case 2:
											{
												system("cls");
												cout << "Podaj miejscowosc: "; cin >> sMiejscowosc;
												cout << "Podaj cene: "; cin >> Cena;
												cout << "Podaj opis: "; cin.ignore(); getline(cin,sOpis);
	         								    cout << "Podaj liczbe pokoi: "; cin >> LiczbaPokoi;
	         								    cout << "Podaj liczbe kondygnacji: "; cin >> Kondygnacji;
	         								    IDk = 0;
	         								    IDk2 = 0;
												dom.push_back(Dom(sMiejscowosc,Cena,sOpis,LiczbaPokoi,Kondygnacji,IDk,IDk2));
												AddDom(sMiejscowosc,Cena,sOpis,LiczbaPokoi,Kondygnacji,IDk,IDk2);
											}
										break;
										case 3:
											{
												system("cls");
												cout << "Podaj miejscowosc: "; cin >> sMiejscowosc;
												cout << "Podaj cene: "; cin >> Cena;
												cout << "Podaj opis: "; cin.ignore(); getline(cin,sOpis);
	         								    cout << "Podaj przeznaczenie dzialki: "; cin.ignore(); getline(cin,sPrzeznaczenieDzialki);
	         								    cout << "Podaj powierzchnie dzialki[m2]: "; cin >> Powierzchnia;
	         								    IDk = 0;
	         								    IDk2 = 0;
												dzialka.push_back(Dzialka(sMiejscowosc,Cena,sOpis,sPrzeznaczenieDzialki,Powierzchnia,IDk,IDk2));
												AddDzialka(sMiejscowosc,Cena,sOpis,sPrzeznaczenieDzialki,Powierzchnia,IDk,IDk2);
											}
										break;
										
									}
								}
							break;
							case 2:
								{
									system("cls");
									cout << "1. Mieszkanie" << endl << "2. Dom" << endl << "3. Dzialka" << endl;
									cout << "Jaka nieruchomosc chcesz edytowac? - ";
									cin >> x4;
									switch(x4)
									{
										case 1:
											{
												system("cls");
												if (mieszkanie.empty())
												{
													cout << "Nie ma mieszkan, ktore mozna edytowac.. Powrot do menu za kilka sekund";
													Sleep(3500);
												}
												else
												{
												for(int i=0; i < mieszkanie.size(); i++)
												{
													cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
												}
												cout << "Ktore mieszkanie chcesz modyfikowac? - ";
												cin >> ModifyUser;
												system("cls");
												//cout << "Podaj nowa miejscowosc: "; cin >> sMiejscowosc;
												cout << "Podaj nowa cene: "; cin >> Cena;
												cout << "Podaj nowy opis: "; cin.ignore(); getline(cin,sOpis);
	         								    cout << "Podaj nowa liczbe pokoi: "; cin >> LiczbaPokoi;
	         								    cout << "Podaj nowe pietro: "; cin >> Pietro;
	         								    IDk = mieszkanie[ModifyUser].GetID();
	         								    //mieszkanie[ModifyUser].SetMiejscowosc(sMiejscowosc);
												mieszkanie[ModifyUser].SetCena(Cena);
												mieszkanie[ModifyUser].SetOpis(sOpis);
												mieszkanie[ModifyUser].SetLiczbaPokoi(LiczbaPokoi);
												mieszkanie[ModifyUser].SetPietro(Pietro);
												mieszkanie[ModifyUser].SetID(IDk);
												SaveMieszkanie();
												}
											}
										break;
										case 2:
											{
												system("cls");
												if (dom.empty())
												{
													cout << "Nie ma domow, ktore mozna edytowac.. Powrot do menu za kilka sekund";
													Sleep(3500);
												}
												else
												{
												for(int i=0; i < dom.size(); i++)
												{
													cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
												}
												cout << "Ktory dom chcesz modyfikowac? - ";
												cin >> ModifyUser;
												system("cls");
												//cout << "Podaj nowa miejscowosc: "; cin >> sMiejscowosc;
												cout << "Podaj nowa cene: "; cin >> Cena;
												cout << "Podaj nowy opis: "; cin.ignore(); getline(cin,sOpis);
	         								    cout << "Podaj nowa liczbe pokoi: "; cin >> LiczbaPokoi;
	         								    cout << "Podaj nowa liczbe kondygnacji: "; cin >> Kondygnacji;
	         								    IDk = dom[ModifyUser].GetID();
	         								    //dom[ModifyUser].SetMiejscowosc(sMiejscowosc);
												dom[ModifyUser].SetCena(Cena);
												dom[ModifyUser].SetOpis(sOpis);
												dom[ModifyUser].SetLiczbaPokoi(LiczbaPokoi);
												dom[ModifyUser].SetLiczbaKondygnacji(Kondygnacji);
												dom[ModifyUser].SetID(IDk);
												SaveDom();
												}	
											}
										break;
										case 3:
											{
												system("cls");
												if (dzialka.empty())
												{
													cout << "Nie ma dzialek, ktore mozna edytowac.. Powrot do menu za kilka sekund";
													Sleep(3500);
												}
												else
												{
												for(int i=0; i < dzialka.size(); i++)
												{
													cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
												}
												cout << "Ktory dom chcesz modyfikowac? - ";
												cin >> ModifyUser;
												system("cls");
												//cout << "Podaj nowa miejscowosc: "; cin >> sMiejscowosc;
												cout << "Podaj nowa cene: "; cin >> Cena;
												cout << "Podaj nowy opis: "; cin.ignore(); getline(cin,sOpis);
	         								    cout << "Podaj nowe przeznaczenie dzialki: "; cin >> sPrzeznaczenieDzialki;
	         								    cout << "Podaj nowa powierzchnie dzialki: "; cin >> Powierzchnia;
	         								    IDk = dzialka[ModifyUser].GetID();
	         								    //dzialka[ModifyUser].SetMiejscowosc(sMiejscowosc);
												dzialka[ModifyUser].SetCena(Cena);
												dzialka[ModifyUser].SetOpis(sOpis);
												dzialka[ModifyUser].SetPrzeznaczenieDzialki(sPrzeznaczenieDzialki);
												dzialka[ModifyUser].SetPowierzchniaDzialki(Powierzchnia);
												dzialka[ModifyUser].SetID(IDk);
												SaveDzialka();
												}
											}
										break;
									}
								}
							break;
							case 3:
								{
									system("cls");
									cout << "1. Mieszkanie" << endl << "2. Dom" << endl << "3. Dzialka" << endl;
									cout << "Jaka nieruchomosc chcesz usunac? - ";
									cin >> x4;
									switch(x4)
									{
										case 1:
											{
												if (mieszkanie.empty())
												{
													cout << "Nie ma co usuwac.. Powrot do menu za kilka sekund";
													Sleep(3500);
												}
												else
												{
													system("cls");
													for(int i=0; i < mieszkanie.size(); i++)
													{
														if(mieszkanie[i].GetID()==0)
														{
															flag=1;
															cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
														}
													}
													if(flag==1)
													{	
														cout << "Ktore mieszkanie chcesz usunac? - ";
														cin >> ModifyUser;
														system("cls");
														cout << "Jestes pewny usuniecia mieszkania?" << endl;
														cout << "[ [T/t] - usuwa mieszkanie, [N/n] - anuluje usuwanie ]" << endl;
														cin >> sOpis;
														if(sOpis == "T" || sOpis == "t")
														{
															if(ModifyUser==0)
															{
																mieszkanie.erase(mieszkanie.begin());
															}
															else
															{
																mieszkanie.erase(mieszkanie.begin() + ModifyUser);
															}
															SaveMieszkanie();
														}
													}
													else
													{
														cout << "Brak mieszkan do usuniecia. Powrot do menu za kilka sekund";
														Sleep(3500);
													}
												}
											}
										break;
										case 2:
											{
												if (dom.empty())
												{
													cout << "Nie ma co usuwac.. Powrot do menu za kilka sekund";
													Sleep(3500);
												}
												else
												{
													system("cls");
													for(int i=0; i < dom.size(); i++)
													{
														if(dom[i].GetID()==0)
														{
															flag=1;
															cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
														}
													}
													if(flag==1)
													{
														cout << "Ktory dom chcesz usunac? - ";
														cin >> ModifyUser;
														system("cls");
														cout << "Jestes pewny usuniecia domu?" << endl;
														cout << "[ [T/t] - usuwa dom, [N/n] - anuluje usuwanie ]" << endl;
														cin >> sOpis;
														if(sOpis == "T" || sOpis == "t")
														{
															if(ModifyUser==0)
															{
																dom.erase(dom.begin());
															}
															else
															{
																dom.erase(dom.begin() + ModifyUser);
															}
															SaveDom();
														}
													}
													else
													{
														cout << "Brak domow do usuniecia. Powrot do menu za kilka sekund";
														Sleep(3500);
													}
												}
											}
										break;
										case 3:
											{
												if (dzialka.empty())
												{
													cout << "Nie ma co usuwac.. Powrot do menu za kilka sekund";
													Sleep(3500);
												}
												else
												{
													system("cls");
													for(int i=0; i < dzialka.size(); i++)
													{
														if(dzialka[i].GetID()==0)
														{
															flag=1;
															cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << " Powierzchnia: " << dzialka[i].GetPowierzchniaDzialki() << endl;
														}
													}
													if(flag==1)
													{		
														cout << "Ktora dzialke chcesz usunac? - ";
														cin >> ModifyUser;
														system("cls");
														cout << "Jestes pewny usuniecia dzialki?" << endl;
														cout << "[ [T/t] - usuwa dzialke, [N/n] - anuluje usuwanie ]" << endl;
														cin >> sOpis;
														if(sOpis == "T" || sOpis == "t")
														{
															if(ModifyUser==0)
															{
																dzialka.erase(dzialka.begin());
															}
															else
															{
																dzialka.erase(dzialka.begin() + ModifyUser);
															}
															SaveDzialka();
														}
													}
													else
													{
														cout << "Brak dzialek do usuniecia. Powrot do menu za kilka sekund";
														Sleep(3500);
													}
												}
											}
										break;
									}
								}
							break;
						}
					}
					break;
					case 3:
						{
						system("cls");
						cout << "1. Kup nieruchomosc" << endl << "2. Wynajmij nieruchomosc" << endl << "3. Usun zamowienie" << endl;
						cin >> x2;
						switch(x2)
						{
							case 1:
								{
									system("cls");
									cout << "Podaj date [DD.MM]" << endl;
									cin >> data;
									system("cls");
									cout << "Co chcesz kupic?" << endl << "1. Mieszkanie" << endl << "2. Dom" << endl << "3. Dzialka" << endl;
									cin >> x3;
									switch(x3)
									{
										case 1:
											{
												system("cls");
												for(int i=0;i<mieszkanie.size();i++)
												{
													if(mieszkanie[i].GetCena() < GetMoneyFromLogin(login))
													{
														if(mieszkanie[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
														}
														
													}
												}
												cout << "Ktore mieszkanie chcesz kupic?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												mieszkanie[x1].SetID(GetIDFromLogin(login));
												mieszkanie[x1].SetID2(ID_ZAMOWIENIA);
												SaveMieszkanie();
												DelMoney(login, mieszkanie[x1].GetCena());
												SaveKlient();
												AddZamowienie(data,1,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,1,login,ID_ZAMOWIENIA));
											}
										break;
										case 2:
											{
												system("cls");
												for(int i=0;i<dom.size();i++)
												{
													if(dom[i].GetCena() < GetMoneyFromLogin(login))
													{
														if(dom[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
														}
														
													}
												}
												cout << "Ktory dom chcesz kupic?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												dom[x1].SetID(GetIDFromLogin(login));
												dom[x1].SetID2(ID_ZAMOWIENIA);
												SaveDom();
												DelMoney(login, dom[x1].GetCena());
												SaveKlient();
												AddZamowienie(data,1,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,1,login,ID_ZAMOWIENIA));	
											}
										break;
										case 3:
											{
												system("cls");
												for(int i=0;i<dzialka.size();i++)
												{
													if(dzialka[i].GetCena() < GetMoneyFromLogin(login))
													{
														if(dzialka[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
														}
														
													}
												}
												cout << "Ktora dzialke chcesz kupic?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												dzialka[x1].SetID(GetIDFromLogin(login));
												dzialka[x1].SetID2(ID_ZAMOWIENIA);
												SaveDzialka();
												DelMoney(login, dzialka[x1].GetCena());
												SaveKlient();
												AddZamowienie(data,1,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,1,login,ID_ZAMOWIENIA));
											}
										break;
									}
								}
							break;
							case 2:
								{
									system("cls");
									cout << "Co chcesz wynajac?" << endl << "1. Mieszkanie" << endl << "2. Dom" << endl << "3. Dzialka" << endl;
									cin >> x3;
									switch(x3)
									{
										case 1:
											{
												system("cls");
												for(int i=0;i<mieszkanie.size();i++)
												{
													if(mieszkanie[i].GetCena()/20 < GetMoneyFromLogin(login))
													{
														if(mieszkanie[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena()/20 << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
														}
														
													}
												}
												cout << "Podana kwota wynosi wynajm mieszkania na 12 miesiecy" << endl;
												cout << "Ktore mieszkanie chcesz wynajac?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												mieszkanie[x1].SetID(GetIDFromLogin(login));
												mieszkanie[x1].SetID2(ID_ZAMOWIENIA);
												SaveMieszkanie();
												DelMoney(login, dzialka[x1].GetCena()/20);
												SaveKlient();
												AddZamowienie(data,0,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,0,login,ID_ZAMOWIENIA));
											}
										break;
										case 2:
											{
												system("cls");
												for(int i=0;i<dom.size();i++)
												{
													if(dom[i].GetCena()/20 < GetMoneyFromLogin(login))
													{
														if(dom[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena()/20 << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
														}
														
													}
												}
												cout << "Podana kwota wynosi wynajm mieszkania na 12 miesiecy" << endl;
												cout << "Ktory dom chcesz wynajac?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												dom[x1].SetID(GetIDFromLogin(login));
												dom[x1].SetID2(ID_ZAMOWIENIA);
												SaveDom();
												DelMoney(login, dom[x1].GetCena()/20);
												SaveKlient();
												AddZamowienie(data,0,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,0,login,ID_ZAMOWIENIA));
											}
										break;
										case 3:
											{
												system("cls");
												for(int i=0;i<dzialka.size();i++)
												{
													if(dzialka[i].GetCena()/20 < GetMoneyFromLogin(login))
													{
														if(dzialka[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena()/20 << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
														}
														
													}
												}
												cout << "Podana kwota wynosi wynajm mieszkania na 12 miesiecy" << endl;
												cout << "Ktora dzialke chcesz wynajac?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												dzialka[x1].SetID(GetIDFromLogin(login));
												dzialka[x1].SetID2(ID_ZAMOWIENIA);
												SaveDzialka();
												DelMoney(login, dzialka[x1].GetCena()/20);
												SaveKlient();
												AddZamowienie(data,0,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,0,login,ID_ZAMOWIENIA));
											}
										break;
									}
								}
							break;
							case 3:
								{
									system("cls");
									if(ZamowienieEmpty())
									{
										cout << "Baza zamowien pusta. Nie ma co usunac";
										Sleep(3500);
										break;
									}
									for(int i=0;i<zamowienie.size();i++)
									{
										cout << i << ". " << endl;
										DaneZamowienia(login,zamowienie[i].GetID());
									}
									cin >> x1;
									UsunZamowienie(x1);
								}
							break;
						}
						}
					break;
					case 4:
						{
							system("cls");
							int temp=0,temp2=0;
							cout << "<---------------------- MIESZKANIA ---------------------->" << endl;
							cout << "Mieszkan w systemie: " << mieszkanie.size() << endl;
							for(int i=0;i<mieszkanie.size();i++)
							{
								if(mieszkanie[i].GetID()!=0)
								{
									temp++;
								}
								else
								{
									temp2++;
								}
							}
							cout << "Mieszkania wynajete lub kupione: " << temp << endl;
							cout << "Mieszkania wolne: " << temp2 << endl;
							cout << "<------------------------ DOMY -------------------------->" << endl;
							temp=0;temp2=0;
							cout << "Domow w systemie: " << dom.size() << endl;
							for(int i=0;i<dom.size();i++)
							{
								if(dom[i].GetID()!=0)
								{
									temp++;
								}
								else
								{
									temp2++;
								}
							}
							cout << "Domy wynajete lub kupione: " << temp << endl;
							cout << "Domow wolne: " << temp2 << endl;
							temp=0;temp2=0;
							cout << "<----------------------- DZIALKI ------------------------>" << endl;
							cout << "Dzialek w systemie: " << dzialka.size() << endl;
							for(int i=0;i<dzialka.size();i++)
							{
								if(dzialka[i].GetID()!=0)
								{
									temp++;
								}
								else
								{
									temp2++;
								}
							}
							cout << "Dzialki wynajete lub kupione: " << temp << endl;
							cout << "Dzialki wolne: " << temp2 << endl;
							temp=0;temp2=0;
							cout << "<---------------------- ZAMOWIENIA ---------------------->" << endl;
							cout << "Zamowien w systemie: " << zamowienie.size() << endl;
							for(int i=0;i<zamowienie.size();i++)
							{
								if(zamowienie[i].GetRodzaj()!=0)
								{
									temp++;
								}
								else
								{
									temp2++;
								}
							}
							cout << "Zamowienia dotyczace kupna: " << temp << endl;
							cout << "Zamowienia dotyczace wynajmu: " << temp2 << endl;
							cout << "<------------------------ KONIEC ------------------------>" << endl;
							cout << "Wcisnij 1, aby powrocic do menu: ";
							cin >> x1;
						}
					break;
					case 5:
						{
							system("cls");
							cout << "Co chcesz wyswietlic?" << endl;
							cout << "1. Wszystkie mieszkania \n2. Mieszkania zajete \n3. Mieszkania wolne \n4. Wszystkie domy\n5. Domy zajete\n6. Domy wolne\n7. Wszystkie dzialki\n8. Dzialki zajete\n9. Dzialki wolne\n10. Wszystkie zamowienia\n";
							cin >> x1;
							switch(x1)
							{
								case 1:
									{
										system("cls");
										for(int i=0;i<mieszkanie.size();i++)
										{
											cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 2:
									{
										system("cls");
										for(int i=0;i<mieszkanie.size();i++)
										{
											if(mieszkanie[i].GetID()!=0)
											{
												cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 3:
									{
										system("cls");
										for(int i=0;i<mieszkanie.size();i++)
										{
											if(mieszkanie[i].GetID()==0)
											{
												cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 4:
									{
										system("cls");
										for(int i=0;i<dom.size();i++)
										{
											cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 5:
									{
										system("cls");
										for(int i=0;i<dom.size();i++)
										{
											if(dom[i].GetID()!=0)
											{
											cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;	
									}
								break;
								case 6:
									{
										system("cls");
										for(int i=0;i<dom.size();i++)
										{
											if(dom[i].GetID()==0)
											{
											cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;	
									}
								break;
								case 7:
									{
										system("cls");
										for(int i=0;i<dzialka.size();i++)
										{
											cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 8:
									{
										system("cls");
										for(int i=0;i<dzialka.size();i++)
										{
											if(dzialka[i].GetID()!=0)
											{
												cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;	
									}
								break;
								case 9:
									{
										system("cls");
										for(int i=0;i<dzialka.size();i++)
										{
											if(dzialka[i].GetID()==0)
											{
												cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 10:
									{
										system("cls");
										for(int i=0;i<zamowienie.size();i++)
										{
											cout << i << ". " << endl;
											DaneZamowienia(login,zamowienie[i].GetID());
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;

							}
						}
					break;
				}
		}
		else
		{
			flag=0;
			system("cls");
			cout << "Zalogowany jako [ " << login << " ]" << endl;
			cout << "1. Zarzadzanie zamowieniami" << endl << "2. Statystyki" << endl << "3. Wyswietl" << endl;
			cin >> x1;
			switch(x1)
				{
					case 1:
						{
						system("cls");
						cout << "1. Kup nieruchomosc" << endl << "2. Wynajmij nieruchomosc" << endl;
						cin >> x2;
						switch(x2)
						{
							case 1:
								{
									system("cls");
									cout << "Podaj date [DD.MM]" << endl;
									cin >> data;
									system("cls");
									cout << "Co chcesz kupic?" << endl << "1. Mieszkanie" << endl << "2. Dom" << endl << "3. Dzialka" << endl;
									cin >> x3;
									switch(x3)
									{
										case 1:
											{
												system("cls");
												for(int i=0;i<mieszkanie.size();i++)
												{
													if(mieszkanie[i].GetCena() < GetMoneyFromLogin(login))
													{
														if(mieszkanie[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
														}
														
													}
												}
												cout << "Ktore mieszkanie chcesz kupic?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												mieszkanie[x1].SetID(GetIDFromLogin(login));
												mieszkanie[x1].SetID2(ID_ZAMOWIENIA);
												SaveMieszkanie();
												DelMoney(login, mieszkanie[x1].GetCena());
												SaveKlient();
												AddZamowienie(data,1,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,1,login,ID_ZAMOWIENIA));
											}
										break;
										case 2:
											{
												system("cls");
												for(int i=0;i<dom.size();i++)
												{
													if(dom[i].GetCena() < GetMoneyFromLogin(login))
													{
														if(dom[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
														}
														
													}
												}
												cout << "Ktory dom chcesz kupic?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												dom[x1].SetID(GetIDFromLogin(login));
												dom[x1].SetID2(ID_ZAMOWIENIA);
												SaveDom();
												DelMoney(login, dom[x1].GetCena());
												SaveKlient();
												AddZamowienie(data,1,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,1,login,ID_ZAMOWIENIA));	
											}
										break;
										case 3:
											{
												system("cls");
												for(int i=0;i<dzialka.size();i++)
												{
													if(dzialka[i].GetCena() < GetMoneyFromLogin(login))
													{
														if(dzialka[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
														}
														
													}
												}
												cout << "Ktora dzialke chcesz kupic?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												dzialka[x1].SetID(GetIDFromLogin(login));
												dzialka[x1].SetID2(ID_ZAMOWIENIA);
												SaveDzialka();
												DelMoney(login, dzialka[x1].GetCena());
												SaveKlient();
												AddZamowienie(data,1,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,1,login,ID_ZAMOWIENIA));
											}
										break;
									}
								}
							break;
							case 2:
								{
									system("cls");
									cout << "Co chcesz wynajac?" << endl << "1. Mieszkanie" << endl << "2. Dom" << endl << "3. Dzialka" << endl;
									cin >> x3;
									switch(x3)
									{
										case 1:
											{
												system("cls");
												for(int i=0;i<mieszkanie.size();i++)
												{
													if(mieszkanie[i].GetCena()/20 < GetMoneyFromLogin(login))
													{
														if(mieszkanie[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena()/20 << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
														}
														
													}
												}
												cout << "Podana kwota wynosi wynajm mieszkania na 12 miesiecy" << endl;
												cout << "Ktore mieszkanie chcesz wynajac?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												mieszkanie[x1].SetID(GetIDFromLogin(login));
												mieszkanie[x1].SetID2(ID_ZAMOWIENIA);
												SaveMieszkanie();
												DelMoney(login, dzialka[x1].GetCena()/20);
												SaveKlient();
												AddZamowienie(data,0,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,0,login,ID_ZAMOWIENIA));
											}
										break;
										case 2:
											{
												system("cls");
												for(int i=0;i<dom.size();i++)
												{
													if(dom[i].GetCena()/20 < GetMoneyFromLogin(login))
													{
														if(dom[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena()/20 << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
														}
														
													}
												}
												cout << "Podana kwota wynosi wynajm mieszkania na 12 miesiecy" << endl;
												cout << "Ktory dom chcesz wynajac?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												dom[x1].SetID(GetIDFromLogin(login));
												dom[x1].SetID2(ID_ZAMOWIENIA);
												SaveDom();
												DelMoney(login, dom[x1].GetCena()/20);
												SaveKlient();
												AddZamowienie(data,0,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,0,login,ID_ZAMOWIENIA));
											}
										break;
										case 3:
											{
												system("cls");
												for(int i=0;i<dzialka.size();i++)
												{
													if(dzialka[i].GetCena()/20 < GetMoneyFromLogin(login))
													{
														if(dzialka[i].GetID2()==0)
														{
															cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena()/20 << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
														}
														
													}
												}
												cout << "Podana kwota wynosi wynajm mieszkania na 12 miesiecy" << endl;
												cout << "Ktora dzialke chcesz wynajac?" << endl;
												cin >> x1;
												int ID_ZAMOWIENIA = NextIDZamowienia();
												dzialka[x1].SetID(GetIDFromLogin(login));
												dzialka[x1].SetID2(ID_ZAMOWIENIA);
												SaveDzialka();
												DelMoney(login, dzialka[x1].GetCena()/20);
												SaveKlient();
												AddZamowienie(data,0,login,ID_ZAMOWIENIA);
												zamowienie.push_back(Zamowienie(data,0,login,ID_ZAMOWIENIA));
											}
										break;
									}
								}
							break;
						}
						}
					break;
					case 2:
						{
							system("cls");
							int temp=0,temp2=0;
							cout << "<---------------------- MIESZKANIA ---------------------->" << endl;
							cout << "Mieszkan w systemie: " << mieszkanie.size() << endl;
							for(int i=0;i<mieszkanie.size();i++)
							{
								if(mieszkanie[i].GetID()!=0)
								{
									temp++;
								}
								else
								{
									temp2++;
								}
							}
							cout << "Mieszkania wynajete lub kupione: " << temp << endl;
							cout << "Mieszkania wolne: " << temp2 << endl;
							cout << "<------------------------ DOMY -------------------------->" << endl;
							temp=0;temp2=0;
							cout << "Domow w systemie: " << dom.size() << endl;
							for(int i=0;i<dom.size();i++)
							{
								if(dom[i].GetID()!=0)
								{
									temp++;
								}
								else
								{
									temp2++;
								}
							}
							cout << "Domy wynajete lub kupione: " << temp << endl;
							cout << "Domow wolne: " << temp2 << endl;
							temp=0;temp2=0;
							cout << "<----------------------- DZIALKI ------------------------>" << endl;
							cout << "Dzialek w systemie: " << dzialka.size() << endl;
							for(int i=0;i<dzialka.size();i++)
							{
								if(dzialka[i].GetID()!=0)
								{
									temp++;
								}
								else
								{
									temp2++;
								}
							}
							cout << "Dzialki wynajete lub kupione: " << temp << endl;
							cout << "Dzialki wolne: " << temp2 << endl;
							temp=0;temp2=0;
							cout << "<---------------------- ZAMOWIENIA ---------------------->" << endl;
							cout << "Zamowien w systemie: " << zamowienie.size() << endl;
							for(int i=0;i<zamowienie.size();i++)
							{
								if(zamowienie[i].GetRodzaj()!=0)
								{
									temp++;
								}
								else
								{
									temp2++;
								}
							}
							cout << "Zamowienia dotyczace kupna: " << temp << endl;
							cout << "Zamowienia dotyczace wynajmu: " << temp2 << endl;
							cout << "<------------------------ KONIEC ------------------------>" << endl;
							cout << "Wcisnij 1, aby powrocic do menu: ";
							cin >> x1;
						}
					break;
					case 3:
						{
							system("cls");
							cout << "Co chcesz wyswietlic?" << endl;
							cout << "1. Wszystkie mieszkania \n2. Mieszkania zajete \n3. Mieszkania wolne \n4. Wszystkie domy\n5. Domy zajete\n6. Domy wolne\n7. Wszystkie dzialki\n8. Dzialki zajete\n9. Dzialki wolne\n10. Wszystkie zamowienia\n";
							cin >> x1;
							switch(x1)
							{
								case 1:
									{
										system("cls");
										for(int i=0;i<mieszkanie.size();i++)
										{
											cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 2:
									{
										system("cls");
										for(int i=0;i<mieszkanie.size();i++)
										{
											if(mieszkanie[i].GetID()!=0)
											{
												cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 3:
									{
										system("cls");
										for(int i=0;i<mieszkanie.size();i++)
										{
											if(mieszkanie[i].GetID()==0)
											{
												cout << i << ". Miasto: "<< mieszkanie[i].GetMiejscowosc() << " Cena: " << mieszkanie[i].GetCena() << " Liczba pokoi: " << mieszkanie[i].GetLiczbaPokoi() << " Pietro: " << mieszkanie[i].GetPietro() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 4:
									{
										system("cls");
										for(int i=0;i<dom.size();i++)
										{
											cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 5:
									{
										system("cls");
										for(int i=0;i<dom.size();i++)
										{
											if(dom[i].GetID()!=0)
											{
											cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;	
									}
								break;
								case 6:
									{
										system("cls");
										for(int i=0;i<dom.size();i++)
										{
											if(dom[i].GetID()==0)
											{
											cout << i << ". Miasto: "<< dom[i].GetMiejscowosc() << " Cena: " << dom[i].GetCena() << " Liczba pokoi: " << dom[i].GetLiczbaPokoi() << " Liczba kondygnacji: " << dom[i].GetLiczbaKondygnacji() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;	
									}
								break;
								case 7:
									{
										system("cls");
										for(int i=0;i<dzialka.size();i++)
										{
											cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 8:
									{
										system("cls");
										for(int i=0;i<dzialka.size();i++)
										{
											if(dzialka[i].GetID()!=0)
											{
												cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;	
									}
								break;
								case 9:
									{
										system("cls");
										for(int i=0;i<dzialka.size();i++)
										{
											if(dzialka[i].GetID()==0)
											{
												cout << i << ". Miasto: "<< dzialka[i].GetMiejscowosc() << " Cena: " << dzialka[i].GetCena() << endl << "   Przeznaczenie dzialki: " << dzialka[i].GetPrzeznaczenieDzialki() << endl << "   Powierzchnia [m2]: " << dzialka[i].GetPowierzchniaDzialki() << endl;
											}
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;
								case 10:
									{
										system("cls");
										for(int i=0;i<zamowienie.size();i++)
										{
											cout << i << ". " << endl;
											DaneZamowienia(login,zamowienie[i].GetID());
										}
										cout << "Wcisnij 1, aby powrocic do menu: ";
										cin >> x1;
									}
								break;

							}
						}
					break;
				}
		}
	}
    return 0;
}

