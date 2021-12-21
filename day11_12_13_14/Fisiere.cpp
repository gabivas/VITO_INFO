#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ofstream fisier("text.txt");
	fisier << "Does C++ support 'finally' blocks? (And what's this 'RAII' I keep hearing about?)"<<endl;
	fisier << "Test";
	fisier.close();

	string textCititDinFisier;
	ifstream citesteDinFisier("fisier.txt");
	while (getline(citesteDinFisier, textCititDinFisier)) {
		cout << textCititDinFisier<<endl;
	}
	citesteDinFisier.close();


	return 0;
}