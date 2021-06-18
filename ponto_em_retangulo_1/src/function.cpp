#include "function.h"

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
  if ((P.x >= IE.x || P.x <= SD.x) && (P.y >= IE.y || P.y <= SD.y)) 
  {
 
      return location_t::INSIDE;
    
  }

  else if ((P.x < IE.x || P.x > SD.x) && (P.y < IE.y || P.y > SD.y)) 
  { 
    return location_t::OUTSIDE;
  }

  else if ((P.x == IE.x || P.x == SD.x) && (P.y == IE.y || P.y == SD.y)) 
  {
    return location_t::BORDER;
  }
        
}
