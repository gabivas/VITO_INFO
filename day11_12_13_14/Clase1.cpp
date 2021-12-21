#include<iostream>
#include<string>
using namespace std;

class Melodie {
public:
	int durata;
	string nume;
	void reda() {
		cout << endl << "Se deruleaza melodia "+nume+" timp de " + to_string(durata) +" minute";
	}


};

int main() {
	Melodie melodie1;
	melodie1.durata = 3;
	melodie1.nume = "Asa sunt zilele mele";
	melodie1.reda();

	return 0;
}