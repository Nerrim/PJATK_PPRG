#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Podaj TRZY liczby:\n";
    cout << ">";
    cin >> a;
    cout << "\n>";
    cin >> b;
    cout << "\n>";
    cin >> c;

    cout << "\n\nTwoje liczby to: [" << a << "] , [" << b << "] i [" << c << "]\n";

    if(a>b) {
        if(a>c){
            cout << "Najwieksza liczba z podanych to: " << a << "\n";
            if (b>c) {
                cout << "Nastepna liczba to: " << b << "\n";
                cout << "A najmniejsza liczba to: " << c << "\n";
            }
            else {
                cout << "Nastepna liczba to: " << c << "\n";
                cout << "A najmniejsza liczba to: " << b << "\n";
            }
        }
        else {
            cout << "Najwieksza liczba z podanych to: " << c << "\n";
            cout << "Nastepna liczba to: " << a << "\n";
            cout << "A najmniejsza liczba to: " << b << "\n";
        }
    }

    else {
        if(b>c) {
            cout << "Najwieksza liczba z podanych to: " << b << "\n";
            if(a>c) {
                cout << "Nastepna liczba to: " << a << "\n";
                cout << "A najmniejsza liczba to: " << c << "\n";
            }
            else {
                cout << "Nastepna liczba to: " << c << "\n";
                cout << "A najmniejsza liczba to: " << a << "\n";
            }
            
        }
        else {
            cout << "Najwieksza liczba z podanych to: " << c << "\n";
            cout << "Nastepna liczba to: " << b << "\n";
            cout << "A najmniejsza liczba to: " << a << "\n";
        }
    }


    return 0;
}
