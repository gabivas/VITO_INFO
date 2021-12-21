#include <iostream>
#include <string>

using namespace std;

struct elev {
	string nume;
	string prenume;
	double nota1;
	double nota2;
	double nota3;
	string calificativ;
};

float MedieBAC(elev a) {
	float medie = (a.nota1 + a.nota2 + a.nota3) / 3;
	cout << "Media elevului " << a.nume << a.prenume << " este " << medie;
	return medie;
}
bool Validare(elev a) {
	if (a.nota1 >= 5 && a.nota2 >= 5 && a.nota3 >= 5 && MedieBAC(a) >= 6)

		return true;

	else
		return false;

}


int main() {
	elev a;

	int n;
	elev elevi[30];
	cout << "Numar elevi=";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nume elev" << i << " = ";
		cin >> elevi[i].nume;
		cout << "Prenume elev" << i << "=";
		cin >> elevi[i].prenume;
		cout << "Note elev " << i << "=";
		cin >> elevi[i].nota1;
		cout << "Nota2 elev " << i << "= ";
		cin >> elevi[i].nota2;
		cout << "Nota3 elev" << i << "= ";
		cin >> elevi[i].nota3;

	}
	for (int i = 0; i < n; i++) {
		if (Validare(elevi[i]) == true)
			elevi[i].calificativ = "admis";
		else
		{
			elevi[i].calificativ = "respins";
		}




	}
	for (int i = 0; i < n; i++) {
		if (elevi[i].calificativ == "admis")
			cout << "Elevul cu numele " << elevi[i].nume << " " << elevi[i].prenume << " a promovat";


	}
	return 0;
}