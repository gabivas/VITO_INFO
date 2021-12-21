#include<iostream>
#include<string>
using namespace std;

clasa de baza
class Vehicul {
protected:
	string brand = "Dacia";

public:
	void afiseaza() {
		cout <<endl<< "Vehiculul are brandul "+brand+"!";
	}
};

clasa derivata
class Masina : public Vehicul {
public:
	string model = "1310";

	string getBrand() {
		return brand;
	}

	void afiseaza() {
		cout <<endl<< "Vehiculul are brandul " + brand + " si modelul "+model+ "!";
	}
};



int main() {
	Vehicul v1;
	Masina masina1;
	v1.afiseaza();
	cout << masina1.getBrand() << endl << masina1.model;
	masina1.afiseaza();

	return 0;
}