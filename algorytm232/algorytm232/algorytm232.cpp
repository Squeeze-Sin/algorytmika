#include<iostream>



using namespace std;
int funkcja(int szukana, int l, int p, int sr);



int main() {







    int szukana;

    int l = 0;
    int p = 14;
    int sr = (l + p) / 2;
    cout << "Podaj szukana: ";
    cin >> szukana;
    cout << funkcja(szukana, l, p, sr);


}
int funkcja(int szukana, int l, int p, int sr) {
    int tablica[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    while (l <= p) {
        if (tablica[sr] == szukana) {
            cout << "Podana liczba znajduje sie w indeksie o numerze: ";
            return sr;
        }
        else if (tablica[sr] > szukana)
        {
            p = sr - 1;
        }
        else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    return -1;
}