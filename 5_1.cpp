#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rozmiar, element, indeks;
    cout << "Jak wielki ma byc ten wektor: \n";
    cout << "> ";
    cin >> rozmiar;
    rozmiar = rozmiar - 1;
    cout << endl;
    cout << "prosze wpisac elementy do tego wektora: \n";

    vector <int> wekt(rozmiar);

    for(int i=0; i<=rozmiar; i++) {
        cout << "> ";
        cin >> element;
        wekt[i] = element;
    }

    element = wekt[0];
    indeks = 0;
    for(int j=0; j<=rozmiar; j++) {
        if(wekt[j]<wekt[j+1]) { element = wekt[j+1]; indeks=j+1; }
        else { continue; }
    }

    cout << endl << endl << "Najwiekszym elementem wektora jest: " << element << endl;
    cout << "Znajduje sie on na indeksie: " << indeks << endl;

    return 0;
}
