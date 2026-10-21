
#include <iostream>
using namespace std;
int main() {  // kod 02_01      //zad1.1 wyœwietli sie równie¿ 10 
    for (int i = 5; i <= 7; i++) {      //zad1.2
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;

    for (int i = 5; i < 7; i++) {      //zad1.2
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;

    for (int i = 0; i <= 10; i += 2) {  //zad1.3
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;

    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;

    int fahr, celsius;          //zad3 zmienna float pozwala zmiennej na posiadanie liczb po przecinku
    int start, limit, krok;
    start = 0;
    limit = 200;
    krok = 20;
    for (fahr = 0; fahr <= limit; fahr = fahr + krok)
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;

    }

    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) // zad5 - po zmianie 5.0/9.0 na 5/9 w wyniku zawsze otrzymujemy 0 
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf(" %3.0f %6.1f \n", fahr, celsius);
    }

    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) // zad6
		cin >> limit;
    {
        float celsius = (5.0/9.0) * (fahr - 32.0);
        printf(" %3.0f %6.1f \n", fahr, celsius);
    }
}


