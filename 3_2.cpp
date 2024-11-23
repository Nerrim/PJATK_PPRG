#include <iostream>
using namespace std;

int main() {
	cout << "Witaj! To jest program to testowania klawiatury! \n";

	cout << " Aby z niego wyjsc wcisnij [ t ] \n\n";

	string
	 znak="";

	while (znak != "t") {

		cout << " \f\f\f";
		cout << "> ";
		cin >> znak;

	}



	return 0;
}
