#include <iostream>
using namespace std;

int main() {
	int deimpartit, impartitor, cat, rest;

	cout << "Deimpartit:";
	cin >> deimpartit;

	cout << "Impartitor:";
	cin >> impartitor;

	cat = deimpartit / impartitor;
	rest = deimpartit % impartitor;
	cout << "Cat= " << cat << endl;
	cout << "Rest= " << rest << endl;

	return 0;

}