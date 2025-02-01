#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Podaj liczbe!\n";
    cout << ">";
    int wej;
    cin >> wej;

    vector <int> tab;
    int liczn=0;

    for(int i=wej; i>=0; i--){
        if(i%5==0 && i%3!=0) {
        tab.push_back(i);
        liczn++;
        }
        else {
        continue;
        }
    }
    liczn=liczn-1;
    cout<< "\n\nLiczby nie wieksze od ["<<wej<<"] i podzielne przez 5 ale nie 3: \n";
    for(int j=0; j<=liczn; j++) {
        cout<<tab[j] << " " ;
    }

    cout << "\n\n";
    return 0;
}
