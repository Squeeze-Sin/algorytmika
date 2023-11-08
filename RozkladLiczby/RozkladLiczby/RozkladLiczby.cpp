#include <iostream>
using namespace std;


int main()
{
   int k = 2;
   int n;
   cout << "Podaj liczbe: ";
   cin >> n;
   while (n > 1) {
	   while (n % k == 0) {
		   cout << k << endl;
		   n = n / k;
		   
	   }
	   k = k + 1;

   }
  
}

