#include <iostream>

using namespace std;

void wyswietl(int tab[10][10]){
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(tab[i][j]<10 && tab[i][j] >= 0) {
                cout << "| " << tab[i][j] << "|  ";
            }
            else {
                cout << "|" << tab[i][j] << "|  ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int tablica[10][10];
    cout << "Tabica : \n";
    //pierwszy wiersz
    for(int i=0; i<10; i++) {
            tablica[i][0] = i;
    }

    //drugi wiersz
    for(int i=0; i<10; i++) {
        tablica[i][1] = i+i;
    }
    //trzeci wiersz
    for(int i=0; i<10; i++) {
        tablica[i][2] = i*i;
    }

    //czwarty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][3] = 3+i;
    }

    //piąty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][4] = 4-i;
    }

    //szósty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][5] = 0;
    }

     //siódmy wiersz
    for(int i=0; i<10; i++) {
        tablica[i][6] = 0;
    }

    //ósmy wiersz
    for(int i=0; i<10; i++) {
        tablica[i][7] = 0;
    }

    //dziewiąty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][8] = 0;
    }

    //dziesiąty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][9] = 0;
    }

    wyswietl(tablica);

    return 0;
}
