#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{

  std::vector<unsigned int> sequencia;

  for (int cont = 0; cont < n; cont++) 
  {
    if (n == 0 || n == 1) 
    {
      sequencia.push_back(1);
    }

    sequencia.push_back(sequencia.at(cont-1) + sequencia.at(cont-2));
  }

    return sequencia;
}
