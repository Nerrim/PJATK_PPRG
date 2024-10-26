#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Podaj dwie liczby: \n";
    cout << "\n> ";
    cin >> a;
    cout << "\n> ";
    cin >> b;

    cout <<"\n:------------------------------------------------------:\n";

    cout << "\n\nPobrano liczby a => [" << a << "] oraz b => [" << b << "]\n";

    cout <<"\n:------------------------------:\n";

    cout << "\nWiersz gwiazdek o dlugosci 'a': \n\n";
    for(int i=1; i<=a; i++)
    {
        cout<<"*";
    }

    cout <<"\n:------------------------------:\n";

    cout << "\nKolumna gwiazdek o wysokosci 'b': \n";
    for(int i=1; i<=b; i++)
    {
        cout<<"*\n";
    }

    cout <<"\n:------------------------------:\n";

    cout << "\nWypelniony prostokat o wymiarach 'a' i 'b': \n\n";
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            cout<<"*";
        }
        cout <<"\n";
    }

    cout <<"\n:------------------------------:\n";

    cout << "\nObramowka prostokatu o wymiarach 'a'i 'b': \n\n";
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            if(i==1 || i==a) {cout << "*";}
            else
            {
                if(j==1 || j==b) {cout<<"*";}
                else {cout<<" ";}
            }
        }
        cout <<"\n";
    }

    cout <<"\n:------------------------------:\n";

    cout << "\nTrojkat prosokatny o podstawie i wyskosci 'a' \n\n";
    for(int i=1; i<=a; i++)
    {
        for(int j=1;j<=i;j++)
        {
                cout<<"*";
        }
        cout <<"\n";
    }

    cout <<"\n:------------------------------:\n";

    cout << "\nOdwrocony trojkat prosokatny o podstawie i wyskosci 'a' \n\n";
    for(int i=1; i<=a; i++)
    {
        for(int j=a;j>=i;j--)
        {
                cout<<"*";
        }
        cout <<"\n";
    }


    return 0;
}
