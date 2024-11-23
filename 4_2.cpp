#include <iostream>

using namespace std;

int main() {
int rozmiar = 0;
int wartosc = 0;
int Pwt;
int LPwt = 0;
int W;
int LW = 0;
cout << "KREATOR TABLICY \n\n";

cout << "Jak wielka chcesz tablice: ";
cin >> rozmiar;
rozmiar = rozmiar - 1;
int tablica[rozmiar];

for(int i=0; i<=rozmiar; i++) {
    cout << "Wprowadz wartosc elementu [" << i+1 << "] -> ";
    cin >> wartosc;
    tablica[i] = wartosc;
}

for(int j=0; j<rozmiar ; j++) {
    W = tablica[j];
    Pwt = 0;
    for(int k=0;k<rozmiar;k++) {
        if(tablica[k] == W) {Pwt++;}
        if(LPwt < Pwt) {LPwt = Pwt; LW = W;}
    }
}

cout << "\n\nNajczesciej pojawiajacy sie element w tej tablicy to -> [" << LW << "] i pojawil sie on -> [" << LPwt << "] razy! \n\n";

return 0;
}
