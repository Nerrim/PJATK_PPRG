#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b, c;
    cout << "Program do liczenia funkcji kwadratowej! \n\n\n";
    cout << "Podaj dane dla: \n";
    cout << "> a = ";
    cin >> a;
    cout << "> b = ";
    cin >> b;
    cout << "> c = ";
    cin >> c;


    cout << "\n\n\n\n";

    cout << "Twoja funkcja wyglada tak: \n" << a << "x^2 + " << b << "x + " << c << " = 0 \n\n";

    int delta = pow(b, 2) - (4*a*c);
    cout << "Delta = " << delta << endl;
    if(delta<0) {
        cout << "Brak rozwiazan" << endl;
        return 0;
    }
    else {
        if(delta == 0) {
            int pierw = (-1 * b) / (2*a);
            cout << "x = " << pierw << endl;
            return 0;
        }
        else {
            int pierw1 = ((-1*b) - sqrt(delta)) / (2*a);
            int pierw2 = ((-1*b) + sqrt(delta)) / (2*a);

            cout << "x1 = " << pierw1 << endl;
            cout << "x2 = " << pierw2 << endl;

            return 0;
        }
    }

}
