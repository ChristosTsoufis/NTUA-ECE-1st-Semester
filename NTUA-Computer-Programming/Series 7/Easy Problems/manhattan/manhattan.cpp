#include "pzhelp"  
PROGRAM{  
  REAL x1,y1,x2,y2,a,b,dis;  
  x1=READ_REAL();  
  y1=READ_REAL();  
  x2=READ_REAL();  
  y2=READ_REAL();  
  a=abs(x2-x1);  
  b=abs(y2-y1);  
  dis=a+b;  
  WRITELN(FORM(dis,0,6));  
}  