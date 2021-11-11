#include<iostream>
using namespace std;

int main() {
char litera;
bool esteLiteraMica, esteLiteraMare;

cout << " Introdu un caracter/o litera";
cin >> litera;

esteLiteraMica = (litera == 'a' || litera == 'b' || litera == 'c' || litera == 'd');
esteLiteraMare = (litera == 'A' || litera == 'B' || litera == 'C' || litera == 'D');

if (isalpha(litera)) {

	if (esteLiteraMare == true) {
		cout<<litera<<" este LITERA MARE";
	}
	else if (esteLiteraMica == true) {
		cout<<litera<<" este litera mica";
	}
}
else{
	cout<<"Nu ai introdus o litera!!!"; }
}