#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main (void) 
{
  int valor1, valor2, cont = 0, soma = 0;

  cin >> valor1;
  cin >> valor2;

  if (valor2 > -1000 && valor2 < 1000) 
  {
    if (valor2 > 0) 
    {
      while (cont < valor2) 
      {
        soma = soma + valor1;
        valor1 = valor1 + 1;
        cont++;
      }
    }

    else
      while (cont > valor2) 
      {
        soma = soma + valor1;
        valor1 = valor1 - 1;
        cont--;
      }

  }

  cout << soma << endl;

  return 0;
}