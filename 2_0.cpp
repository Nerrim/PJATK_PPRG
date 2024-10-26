#include <iostream>
using namespace std;

int main() {
    int ilu;
    cout << "Podaj ilosc uczestnikow: ";
    cin >> ilu;
    if(ilu==0) { cout<<"Organizator dostanie wszystko!"; return 0; }
    int pizza = 13;
    while(pizza-ilu == 0 || pizza-ilu < 0)
    {
        pizza=pizza+13;
    } 
     
    if(pizza%ilu != 0)
    {
        int wyn1=pizza%ilu;
        int wyn2=pizza/ilu;
        cout<<"\nkazdy uczestnik dostanie:" << wyn2 << "kawalki pizzy, a organizator dostanie: " << wyn1 <<  " kawalki pizzy\n";     
    } 
    
    else { int wyn=pizza/ilu; cout<<"\nkazdy uczestnik dostanie:" << wyn <<" kawalki pizzy"; }
            
    return 0;
}
