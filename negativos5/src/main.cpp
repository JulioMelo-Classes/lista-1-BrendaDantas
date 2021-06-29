#include <iostream>
using std::cin;
using std::cout;

/*
80%
*/
int main(void)
{
  /*mais um problema de inicialização, cont1 neste caso*/
  int valores[5], cont0, cont1 = 0;
 
  for (cont0 = 0; cont0 < 5; cont0++)
  {
    cin >> valores[cont0];

    if (valores[cont0] < 0)
    { 
      cont1 += 1;
    }

  }
  cout << cont1;

    return 0;
}
