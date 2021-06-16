#include <iostream>
using std::cin;
using std::cout;

int main(void)
{
  int valores[5], cont0, cont1;
 
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
