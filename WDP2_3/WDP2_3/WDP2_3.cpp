// WDP2_3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    //ArtemTsymbalov
    //zad0
    int x;
    cout << "please, insert only positiv valuse:"<<endl;
    cin >> x;
    if (x < 0){
        cout << "inserted valus are nigative! try egain";
    }
    else {
        cout << "inserted valus are positiv!" << x << endl << endl;
    }
    //zad1
    float X=5.64, Y=5.34;
    float suma = X + Y;
    cout << suma << endl<<endl;
    //zad2
    int a = 12, b = 15;
    cout << "wartosci pszed a= " << a << ", b= " << b<<endl;
    a = b, b = a;
    cout << "wartosci pszed a= " << a << ", b= " << b<<endl<<endl;
    //zad3
    float K,C;
    cout << "wpishtemperaturu w kelvinach"<< endl;
    cin >> K;
    cout << "temperatura w kelvinach to" << K << endl;
    C = K - 273.15;
    cout << "temperatura w celsijzh to"<< C << endl<<endl;
    //zad4
    int de, dk;
    cout << "wpish dzilene" << endl;
    cin >> de;
    cout << "wpish dzilnik" << endl;
    cin >> dk;
    cout << de / dk << endl;
    cout << de%dk << endl;
   //zad5
    int num;
    cout << "wpish licbu" << endl;
    cin >> num;
    if (num <= 3 and num>1)
        {
            cout << "licba lest pierwshe" << endl << endl;
        }
    else if (num % 2 == 0 || num % 3 == 0)
        {
            cout << "licba nie jest pierwshe" << endl << endl;
        }
    else
        {
            cout << "licba lest pierwshe" << endl << endl;
        }
    
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
