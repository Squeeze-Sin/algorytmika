#include <iostream>
using namespace std;

double ciag(int n)
{
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 0.5;
	}
	return -ciag(n - 1) * ciag(n - 2);
}
int main()
{
	int n;
	cout << "Podaj nr wyrazu : ";
	cin >> n;
	cout << n << "wyraz ci�gu ma warto�� : " << ciag(n) << endl;
	return 0;
}




