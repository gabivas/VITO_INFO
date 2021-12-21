#include<iostream>
#include<string>

using namespace std;

class Melodie {
private:
	int durata;
	string nume;

public:
	Melodie() {
		this->durata = 5;
		this->nume = "Melodie";
	}

	Melodie(int durata, string nume) {
		this->durata = durata;
		this->nume = nume;
	}

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
	Melodie melodie(3,"Test");
	melodie.setDurata(9);
	melodie1.setDurata(-3);
	melodie1.setNume("Asa sunt zilele mele");

	cout << endl << melodie.getDurata();
	cout << endl << melodie.getNume();

	melodie1.reda();

	return 0;
}