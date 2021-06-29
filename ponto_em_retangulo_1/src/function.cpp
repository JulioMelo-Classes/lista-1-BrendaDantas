#include "function.h"
/*
acho que as condições ficaram meio superdimensionadas para "border" mas blz*/
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
  if (P.x > IE.x && P.x < SD.x && P.y > IE.y && P.y < SD.y) 
  {
    return INSIDE;    
  }

  if ((P.x == IE.x && P.y == IE.y) || (P.x == SD.x && P.y == SD.y) || (P.x == SD.x && P.y == IE.y) || (P.x == IE.x && P.y == SD.y) || (P.x == IE.x && P.y > IE.y && P.y < SD.y) || (P.x == SD.x && P.y > IE.y && P.y < SD.y) || (P.x > IE.x && P.x < SD.x && P.y == IE.y) || (P.x > IE.x && P.x < SD.x && P.y == SD.y) )
  {
    return BORDER;
  }

  else  
  { 
    return OUTSIDE;
  }
        
}