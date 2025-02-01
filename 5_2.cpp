#include <iostream>

using namespace std;

int main() {
    int tab[5][2]={5,4,3,2,1,1,100,9,12,4};
    cout<<"Tablica wejsciowa: \n";
    for(int i=0; i<=4; i++) {
        for(int j=0; j<=1; j++) {
            if(tab[i][j]<10){cout << tab[i][j] << "        ";}
            if(tab[i][j]>=10 && tab[i][j]<100){cout << tab[i][j] << "       ";}
            if(tab[i][j]>=100 && tab[i][j]<1000){cout << tab[i][j] << "      ";}
        }
        cout << endl;
    }
    int old_ele=0;
    int h=0;
    for(int k=0; k<=4; k++) {
        old_ele=tab[k][0];
        tab[k][0]=tab[k][1];
        tab[k][1]=old_ele;
    }
    cout << "\n\n";
     cout<<"Tablica wyjsciowa: \n";
    for(int i=0; i<=4; i++) {
        for(int j=0; j<=1; j++) {
            if(tab[i][j]<10){cout << tab[i][j] << "        ";}
            if(tab[i][j]>=10 && tab[i][j]<100){cout << tab[i][j] << "       ";}
            if(tab[i][j]>=100 && tab[i][j]<1000){cout << tab[i][j] << "      ";}
        }
        cout << endl;
    }
    return 0;
}
