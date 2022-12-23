//program powitanie do kursu cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int nrKursu = 123;
	double cenaKursu = 99.99;
	char typKursu = 'B';
	string imie;
	cout << "Podaj swoje imie: ";
	cin >> imie;
	cout << "Witaj " << imie << " w kursie C++!" << endl;
	cout << "Numer kursu : " << nrKursu << endl;
	cout << "Cena kursu : " << cenaKursu << "zl" << endl;
	cout << "Typ kursu : " << typKursu << endl;

	system("pause");
	return 0;
} 