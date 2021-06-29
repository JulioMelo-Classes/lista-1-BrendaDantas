
#include <array>
#include <iterator>
using std::iter_swap;

template <std::size_t SIZE>
/*
80%*/
void reverse( std::array< std::string, SIZE > & arr)
{
  //faltou inicializar cont1 (eu coloquei para passar nos testes), vou tirar 20%
  int cont1 = 0, cont2 = arr.size();
  
  while (cont1 < cont2) 
  {
    for (cont1 = 0; cont1 < cont2; cont1++)
    {
      arr.at(cont1).swap(arr.at(cont2-1));
      cont2--;
    }
  }
}
