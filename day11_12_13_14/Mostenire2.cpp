#include<iostream>
#include<string>
using namespace std;
class Vehicul {
protected: 
	string brand = "Dacia";

public:
	void afiseaza() {
		cout << "------------------";
	}
};

class Masina : public Vehicul {
public:
	string model = "1310";

	string getBrand() {
		return brand;
	}
};



int main() {
	Masina masina1;
	masina1.afiseaza();
	cout << masina1.getBrand()<<endl<<masina1.model;

	return 0;
}