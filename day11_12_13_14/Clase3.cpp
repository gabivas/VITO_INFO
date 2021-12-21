#include<iostream>
#include<string>
using namespace std;

class Melodie {
private:
	int durata;
	string nume;

public:
	int getDurata() {
		return this->durata;
	}

	void setDurata(int durata) {
		if (durata > 0 && durata < 10)
			this->durata = durata;
		else
			this->durata = 0;
			throw new exception("Exceptie");
	}

	string getNume() {
		return this->nume;
	}

	void setNume(string nume) {
		this->nume = nume;
	}
	void reda();


};

void Melodie::reda() {
	cout << endl << "Se deruleaza melodia " + nume + " timp de " + to_string(durata) + " minute";
}

int main() {
	Melodie melodie1;
	melodie1.setDurata(-3);
	melodie1.setNume("Asa sunt zilele mele");

	cout << endl << melodie1.getDurata();
	cout << endl << melodie1.getNume();

	melodie1.reda();

	return 0;
}