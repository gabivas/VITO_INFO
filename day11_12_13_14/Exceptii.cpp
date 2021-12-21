#include<iostream>

using namespace std;

class myException : public exception {
	
};

int main() {

	try {
		int varsta = 15;
		if (varsta >= 18) {
			cout << "Esti major!";

		}
		else {
			401-cod acces interzis minorilor
			throw 401;
		}
	}
	catch (int numar) {
		cout << "Acces interzis minorilor!";
		cout << "Cod de eroare: " << numar;
	}



	try {
		int salariu = -15;
		if (salariu >= 1) {
			cout << "Salariul este in regula!";

		}
		else {
			401-cod acces interzis minorilor
			throw myException();
		}
	}
	catch (myException e) {
		cout << "Salariul nu poate fi negativ!";
	}
}
