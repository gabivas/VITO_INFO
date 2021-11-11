#include<iostream>
using namespace std;

int main() {
	int numarElementeLista;
	float lista[100], maxim;

	cout << "Numar elemente lista:";
	cin >> numarElementeLista;

	for (int i = 0; i < numarElementeLista; i++) {
		cout << "Lista[" << i << "]:";
		cin >> lista[i];
	}

	maxim = lista[0];
	for (int i = 0; i < numarElementeLista; i++) {
		if (lista[i] > maxim) {
			maxim = lista[i];
	}
	}

	cout<<"Maximul este:"<<maxim << endl;

	return 0;
}