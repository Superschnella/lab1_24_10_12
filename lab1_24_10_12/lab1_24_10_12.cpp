#include <iostream>
using namespace std;

void zadanie1_1() {
    cout << "Dawid\n";
    cout << "s32945" << endl;
    cout << "Polsko-Japonska Akademia Technik Komputerowych filia Gdansk";
}

void zadanie1_2() {
    int iLiczba;
    cout << "Prosze podac liczbe calkowita:";
        cin >> iLiczba;
    if (iLiczba == 0) {
        cout << "Zero!";
    }
    else {
        if (iLiczba > 0) {
            cout << "Dodatnia!";
        }
        else {
            cout << "Ujemna!";
        }
    }
}

void zadanie1_3() {
    int iLiczba;
    cout << "Prosze podac liczbe calkowita:";
        cin >> iLiczba;
    if (iLiczba != 0) {
        if (iLiczba % 2 == 0) {
            cout << "Parzysta!";
        }
        else {
            cout << "Nieparzysta!";
        }
    }
    else {
        cout << "Zero...";
    }
}

void zadanie1_4() {
    int a,b,c;
    cout << "Prosze pokolei podac trzy liczby:\n";
        cin >> a;
        cin >> b;
        while (b == a) {
            cout << "\nTa liczba zostala juz wpisana, prosze uzyc innej:";
            cin >> b;
        }
        cin >> c;
        while (c==b || c==a) {
            cout << "\nTa liczba zostala juz wpisana, prosze uzyc innej:";
            cin >> c;
        }
    if (a > b && a > c) {
        cout << a;
    }
    else {
        if (b > a && b > c) {
            cout << b;
        }
        else {
            cout << c;
        }
    }
}

int main()
{
    cout << "\nzadanie 1.1:\n";
    zadanie1_1();

    cout << "\nzadanie 1.2:\n";
    zadanie1_2();

    cout << "\nzadanie 1.3:\n";
    zadanie1_3();

    cout << "\nzadanie 1.4:\n";
    zadanie1_4();
}
