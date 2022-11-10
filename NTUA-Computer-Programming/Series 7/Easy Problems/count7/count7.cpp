#include "pzhelp"  
PROGRAM{  
  int ar,ypo,phl;  
  ar=READ_INT();  
  ypo=ar%10;  
  phl=ar/10;  
  if ((ypo==7)&&(phl==7))  
    WRITELN ("2");  
  else if ((ypo==7)||(phl==7))  
    WRITELN ("1");  
  else  
    WRITELN ("0");  
} 