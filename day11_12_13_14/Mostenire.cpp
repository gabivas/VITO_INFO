#include<iostream>
#include<string>
using namespace std;
class Vehicul {
public: 
	string brand = "Dacia";

	void afiseaza() {
		cout << "------------------";
	}
};

class Masina : public Vehicul {
public:
	string model = "1310";
};



int main() {
	Masina masina1;
	masina1.afiseaza();
	cout << masina1.brand<<endl<<masina1.model;

	return 0;
}