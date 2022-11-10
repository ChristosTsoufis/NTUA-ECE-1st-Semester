#include "pzhelp"  
PROGRAM{  
  REAL a, b, c, diaf ;  
  a=READ_REAL();  
  b=READ_REAL();  
  c=READ_REAL();  
  diaf=abs(b-c);  
  if((diaf<a) && (a<b+c)){  
    WRITELN("yes");  
  }  
  else   
    WRITELN("no");  
}  