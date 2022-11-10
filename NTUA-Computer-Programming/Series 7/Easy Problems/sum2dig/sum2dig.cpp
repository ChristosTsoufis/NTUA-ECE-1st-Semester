#include "pzhelp"  
PROGRAM{  
  int n,y1,y2,x,z;  
  n=READ_INT();  
  if (n>=10 && n<1000000000){  
    y1=n%10;  
    x=n%100;  
    y2=x/10;  
    z=y1+y2;  
    WRITELN(z);  
  }  
} 