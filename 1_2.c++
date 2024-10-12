#include <iostream>
using namespace std;

int main() {

    int num = 0;
    cout <<"Wpisz liczbe ===> ";
    cin >> num;
    cout <<"\nTwoja liczba " << num << " jest ";
    if(num == 0) {
        cout <<"zerowa\n";
    }
    else {
        if(num > 0) {cout << "dodatnia\n";}

        else {cout << "ujemna\n";}
    }

    return 0;
}
