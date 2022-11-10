#include "pzhelp"  
PROGRAM {  
  int a, b ,c;  
  a=READ_INT();  
  b=READ_INT();  
  c=READ_INT();  
  a=a%42;  
  b=b%42;  
  c=c%42;  
  if ((a==b)&&(b==c))  
    WRITELN(a);  
  else  
    WRITELN("no");  
}  
