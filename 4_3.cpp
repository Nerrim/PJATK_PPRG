#include <iostream>

using namespace std;

int main() {
    int tablica[10][10];
    cout << "Tabica : \n";
    //pierwszy wiersz
    for(int i=0; i<10; i++) {
            tablica[i][0] = i;
            cout <<"|"<< tablica[i][0]<<"|";
    }
    cout << endl;
    //drugi wiersz
    for(int i=0; i<10; i++) {
        tablica[i][1] = i+i;
        cout <<"|"<< tablica[i][1]<<"|";
    }
    //trzeci wiersz
    for(int i=0; i<10; i++) {
        tablica[i][2] = i*i;
        cout <<"|"<< tablica[i][2]<<"|";
    }
    cout << endl;
    //czwarty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][3] = 3+i;
        cout <<"|"<< tablica[i][3]<<"|";
    }
    cout << endl;
    //piąty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][4] = 4-i;
        cout <<"|"<< tablica[i][4]<<"|";
    }
    cout << endl;
    //szósty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][5] = 0;
        cout <<"|"<< tablica[i][5]<<"|";
    }
    cout << endl;
     //siódmy wiersz
    for(int i=0; i<10; i++) {
        tablica[i][6] = 0;
        cout <<"|"<< tablica[i][6]<<"|";
    }
    cout << endl;
    //ósmy wiersz
    for(int i=0; i<10; i++) {
        tablica[i][7] = 0;
        cout <<"|"<< tablica[i][7]<<"|";
    }
    cout << endl;
    //dziewiąty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][8] = 0;
        cout <<"|"<< tablica[i][8]<<"|";
    }
    cout << endl;
    //dziesiąty wiersz
    for(int i=0; i<10; i++) {
        tablica[i][9] = 0;
        cout <<"|"<< tablica[i][9]<<"|";
    }
    cout << endl;
    return 0;
}
