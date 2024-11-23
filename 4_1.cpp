#include <iostream>

using namespace std;

int main() {
int rozmiar = 0;
int wartosc = 0;
int maximum = 0;
bool zmiana = 0;
cout << "KREATOR TABLICY \n\n";

cout << "Jak wielka chcesz tablice: ";
cin >> rozmiar;
rozmiar = rozmiar - 1;
int tablica[rozmiar];

for(int i=0; i<=rozmiar; i++) {
    cout << "Podaj wartosc elementu [" << i+1 << "] -> ";
    cin >> wartosc;
    tablica[i] = wartosc;
}

for(int j=0; j<=rozmiar; j++) {
    if(tablica[j] > maximum) { maximum = tablica[j]; zmiana = 1; }
    else { continue; }
}

if(zmiana==1){
    cout<<"Najwiekszym elementem tablicy jest ["<<maximum<<"] \n";
}

else {
    maximum = tablica[0];
    for(int j=0; j<=rozmiar; j++) {
    if(tablica[j] > maximum) { maximum = tablica[j]; zmiana = 1; }
    else { continue; }
    }
    cout<<"Najwiekszym elementem tablicy jest ["<<maximum<<"] \n";
}

return 0;
}
