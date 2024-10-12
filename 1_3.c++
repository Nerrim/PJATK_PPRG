#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Program do sprawdzania parzystosci\n\n\n";
  cout << "Podaj liczbe ===> ";
  cin >> num;

  if(num==0){cout << "\n\nTwoja liczba to ZERO!\n";}
  else {
    if(num%2 == 0){ cout << "\n\nTwoja liczba jest parzysta!\n"; }
    else {if(num%2 != 0) { cout << "\n\nTwoja liczba NIE jest parzysta!\n";}
    }

  }
  return 0;
}
