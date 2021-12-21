#include<iostream>
#include<string>

using namespace std;

int main() {
	string mancare = "Fasole";  la adresa 0x00 stochez variabila mancare
	string fasole = mancare;  la adresa 0x00 stochez variabila fasole
	fasole = "fasole batuta";

	cout << endl << mancare;
	cout << endl << fasole;

	cout << endl << &mancare;
	cout << endl << &fasole;

	pointeri

	string anotimp = "iarna";
	string* pointer = &anotimp;

	cout << endl << anotimp;
	cout << endl << &anotimp;
	cout << endl << pointer;
	cout << endl << *pointer;


	return 0;
}