#include "pzhelp"  
PROGRAM{  
  REAL  x, y;  
  x=READ_REAL();  
  y=READ_REAL();  
  if (x*x+y*y<1)  
    WRITELN("inside");  
  else if (x*x+y*y==1)  
    WRITELN("border");  
  else  
    WRITELN("outside");  
}  