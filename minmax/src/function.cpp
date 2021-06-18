#include "function.h"
#include <cstddef>

std::pair<int,int> min_max( int V[], size_t n )
{
   int maior = V[0];
   int menor = V[0];
   int indicemaior, indicemenor = 0;

  for (int cont = 0; cont < n; cont++)
  {
    if (V[cont] > maior) 
    {
      maior = V[cont];
      indicemaior = cont;
    }

    else
      menor = V[cont];
      indicemenor = cont;
  }

    return {menor, maior};
}