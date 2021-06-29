#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*ok! boa ideia usar o cin duas vezes com o operador and
  fica mais claro, na minha opinião, do que fazer cin >> std::ws >> valor1 >> std::ws >> valor2*/
int main (void) 
{
  int valor1, valor2, cont = 0, soma = 0;

  while (cin >> std::ws >> valor1 && cin >> std::ws >> valor2) 
  {

    if (valor2 > -1000 && valor2 < 1000) 
    {
      if (valor2 == 0) 
      {
        soma = valor1; 
      }
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
      {
        while (cont > valor2) 
        {
          soma = soma + valor1;
          valor1 = valor1 - 1;
          cont--;
        }
      }

    cout << soma << endl;
    cont = 0;
    soma = 0;

    }
  }
  return 0;
}