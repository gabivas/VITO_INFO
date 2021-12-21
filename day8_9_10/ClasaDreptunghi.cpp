#include <iostream>
#include <string>

using namespace std;
class dreptunghi {
public:
	int lungime;
	int latime;

	int perimetru() {
		int perimetru = 2 * lungime + 2 * latime;
		return perimetru;
	}
	int arie() {
		int arie = lungime * latime;
		return arie;

	}


};
int main() {
	d1 se numeste obiect, iar dreptunchi se numeste clasa
	dreptunghi d1;
	cout << "lungimea dreptunghiului este= ";
	cin >> d1.lungime;
	cout << "Latimea dreptunghiului este = ";
	cin >> d1.latime;
	cout << "Perimetrul dreptunghiului este = " << d1.perimetru() << endl;
	cout << "Aria dreptunghiului este =" << d1.arie() << endl;



	return 0;


}