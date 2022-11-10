#include "pzhelp"  
PROGRAM {  
  int a, b, c ;  
    a=READ_INT();  
    b=READ_INT();  
    c=a*b;  
    if (c>=1000 && c<=9999)  
      WRITELN ("yes");  
    else  
      WRITELN("no");  
}  