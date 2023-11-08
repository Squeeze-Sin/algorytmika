
#include <iostream>
using namespace std;
int funkcja(int a, int n, int w);
int main()
{
    int a;
    int n;
    int w = 1;

    cout << "Podaj podstawe: ";
    cin >> a;
    cout << "Podaj wykladnik: ";
    cin >> n;

    cout << a << " do potegi " << n << " wynosi " << funkcja(a, n, w);

}
int funkcja(int a, int n, int w) {
    while (n > 0) {
        if (n % 2 == 1) {
            w = w * a;
        }
        a = a * a;
        n = n / 2;
    }
    return w;

}

