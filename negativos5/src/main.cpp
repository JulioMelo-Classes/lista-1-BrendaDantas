#include <iostream>
using namespace std;
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

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

  cout << cont1 << endl;

    // TODO: Adicione aqui seu código.
    return 0;
}
