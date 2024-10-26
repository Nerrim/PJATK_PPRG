#include <iostream>

using namespace std;

int main() {
    cout << "Witaj! \n\n";
    cout << "Podaj numer miesiaca o ktorym chesz sie czegos dowiedziec: \n\n";
    cout <<"(1-12) >";
    int wej;
    cin >> wej;
    switch(wej)
    {
    default:
        cout << "Niestety nie ma miesiaca " << wej <<"-ego. :(";
        break;
    case 1:
        cout << "STYCZEN\n Styczen jest miesiacem pochmurnym. Ma on 31 dni \n";
        break;
    case 2:
        cout << "LUTY\n Luty jest tak jak styczen jest pochmurny. Jest on najkrotszym miesiacem majacym dwadziescia osiem a czasem dziewiec dni (28/29 dni) \n";
        break;
    case 3:
        cout << "MARZEC\n Marzec jest ostatnim pochmurnym miesiacem. Ma on 31 dni\n";
        break;
    case 4:
        cout << "KIWECIEN\n Kwiecien jest pierwszym slonecznym miesiacem roku. Ma on tylko 30 dni\n";
        break;
    case 5:
        cout << "MAJ\n Maj jest sloneczny. Ma on 31 dni\n";
        break;
    case 6:
        cout << "CZERWIEC\n Czerwiec jest sloneczny. Ma on 30 dni\n";
        break;
    case 7:
        cout << "LIPIEC\n Lipiec jest sloneczny. Ma on 31 dni\n";
        break;
    case 8:
        cout << "SIERPIEN\n Sierpien jest sloneczny. Ma on 31 dni\n";
        break;
    case 9:
        cout << "WRZESIEN\n Wrzesien jest ostatnim miesiacem slonecznym. Ma on 30 dni\n";
        break;
    case 10:
        cout << "PAZDZIERNIK\n Pazdziernik jest pierwszym miesiacem pochmurnym. Ma on 31 dni\n";
        break;
    case 11:
        cout << "LISTOPAD\n Listopad jest jest pochmurny. Ma on 30 dni\n";
        break;
    case 12:
        cout << "GRUDZIEN\n Grudzien jest jest pochmurny. Ma on 31 dni\n";
        break;
    }

    return 0;
}
