#include "pzhelp"  
PROGRAM{  
  int a, b, x, y, gin;  
  a=READ_INT();  
  b=READ_INT();  
  if ((a>=10 && a<10000) && (b>=10 && b<10000)){  
    gin=a*b;  
    x=gin/10;  
    y=x%100;  
    if(y<10){  
      WRITE(0);WRITELN(y);}  
    else  
      WRITELN(y);  
  }  
}  