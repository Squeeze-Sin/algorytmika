#include <iostream>
using namespace std;

void przeliczanie(int a)
{
    int tab[15];

    int i = 0;
    while (a > 0) {
        tab[i] = a % 2;
        a = a / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << tab[j];
}

int main()

{
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    przeliczanie(a);
    return 0;
}