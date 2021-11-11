#include<iostream>
using namespace std;

int main() {
	int n, suma = 0;
	cout << "Introduceti numarul: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		suma = suma + i;
	}
	citire: pentru i=1, 1<=5?, suma=0+1=1, i=1+1;
	i=1; suma=0+1=1
	i=2; suma=1+2=3
	i=3; suma=3+3=6
	...
	i=5; suma= 10+5=15
	i=6; suma=15

	cout << "Suma este: " << suma;

	return 0;
}
