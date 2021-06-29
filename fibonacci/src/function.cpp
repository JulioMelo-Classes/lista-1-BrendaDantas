#include "function.h"

/*80%*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{

  std::vector<unsigned int> sequencia;
  
  if(n == 1){
    return sequencia;  
  }

  /*essa condição aqui não é acondição de parada para esse problema, mas ela funciona pq fib(n) <= n para n>1
    por isso vou descontar 20%*/
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
