
#include <array>
#include <iterator>
using std::iter_swap;

template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr)
{
    std::string aux1, aux2;
    for (int cont1 = 0; cont1 < arr.size(); cont1++) 
    {
      for (int cont2 = arr.size(); cont2 > 0; cont2--) {
        aux1 = arr.at(cont1);
        aux2 = arr.at(cont2);
        arr.at(cont1).swap(arr.at(cont2));
      }
    }
}
