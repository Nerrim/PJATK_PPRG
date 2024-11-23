#include <iostream>
#include <iomanip>

using namespace std;

int main() {
float x, y;
cout << "Podaj dwie dowolne liczby: \n";
cout << "> ";
cin >> x;
cout <<"> ";
cin >> y;

cout << "Oto co wprowadziles do programu: " << x << " i " << y << endl;

cout << "Obliczenia dla tych liczb: \n\n";
float suma, roznica, iloczyn, iloraz;

suma = x + y;
roznica = x - y;
iloczyn = x * y;

if(y != 0) {
        iloraz = x / y;
        cout <<"Suma: " << setprecision(2) << suma << endl;
        cout <<"Roznica: " << setprecision(2) << roznica << endl;
        cout <<"Iloczyn: " << setprecision(2) << iloczyn << endl;
        cout <<"Iloraz: " << setprecision(2) << iloraz << "\n\n\n\n";
}


else {
    cout <<"Suma: " << setprecision(2) << suma << endl;
    cout <<"Roznica: " << setprecision(2) << roznica << endl;
    cout <<"Iloczyn: " << setprecision(2) << iloczyn << endl;
    cout <<"Nie mozna dzielic przez 0! \n\n\n\n";
}

return 0;
}
