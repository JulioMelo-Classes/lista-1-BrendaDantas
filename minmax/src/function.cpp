#include "function.h"
#include <cstddef>

std::pair<int,int> min_max( int V[], size_t n )
{
   int maior = V[0];
   int menor = V[0];
   int indicemaior = 0, indicemenor = 0;

  if (n == 0)
  {
    indicemaior = -1; indicemenor = -1;
    return {indicemaior, indicemenor};
  }

  else
    for (int cont = 0; cont < n; cont++)
    {
      if (V[cont] >= maior) 
      {
        maior = V[cont];
        indicemaior = cont;
      }

      else if (V[cont] < menor)
      {
        menor = V[cont];
        indicemenor = cont;
      }
    }
  
  return {indicemenor, indicemaior};
}