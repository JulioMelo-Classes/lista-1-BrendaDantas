#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{

  std::vector<unsigned int> sequencia;
  
  if(n == 1){
    return sequencia;  
  }

  for (int cont = 0; cont < n; cont++) 
  {
    if (sequencia.size() >=1 && sequencia.back() >= n)
    {
      sequencia.pop_back();
      return sequencia;
    }
    
    if (cont == 0 || cont == 1) 
    {
      sequencia.push_back(1);
    }

    else 
    {
      sequencia.push_back(sequencia.at(cont-1) + sequencia.at(cont-2));
    }
  }
}
