#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
//----------------- www.math.edu.pl ------------------

int main(int argc, char *argv[])
{
  unsigned long n;

   cout << "Rozklad liczby naturalnej na czynniki pierwsze\n"
        "Podaj n = ";

   cin >> n; cout << endl;

   if (n > 1)
   {
     cout << n << " = ";

     int i = 2;

      while (i <= (unsigned long)sqrt((double)n))
      {

      while (!(n % i))
       {
       n /= i;
       cout << i << " x ";
       }

       if (n == 1) break;
       i++;
      }

     if (n > 1) cout << n;

   }
   else cout << "Niew³aœciwe dane\n";

   cout << endl << endl;
 system("PAUSE");
 return 0;
}
