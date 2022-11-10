#include "pzhelp"  
PROGRAM{  
  int n, d, x, y;  
  n=READ_INT();  
  d=READ_INT();  
  x=n%10;  
  y=n/100000;  
  if(x==d && y==d)  
    WRITELN ("yes");  
  else  
    WRITELN("no");  
}  