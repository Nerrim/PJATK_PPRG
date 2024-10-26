#include <iostream>

using namespace std;

int main() {
    int wej;
    cout << "Jak dlugi szereg chcesz wypisac \n>";
    cin >> wej;
    cout <<"\n\n";

    int tab[wej];
    int obl;
    for(int i=0;i<=wej-1;i++)
    {
        obl = 0;
        for(int j=0; j<=i; j++)
        {
            tab[j]=j+1;
            obl = tab[j] + obl;
            cout<<tab[j];
            if(j!=i) {cout<<" + ";}
            else {continue;}
        }
        cout << " = " << obl;
        cout << "\n";
    }


    return 0;
}
