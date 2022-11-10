#include "pzhelp"  
PROGRAM{  
  REAL a, b, x;  
  a = READ_REAL();  
  b = READ_REAL();  
  if (a!=0){  
    if (b!=0){  
     x = - b/a;  
     WRITELN(FORM(x,0,6));}  
    else if (b==0){  
     x = 0;  
     WRITELN (x);}  
  }  
  else if ((a==0) && (b!=0)){  
    WRITELN ("impossible");}  
  else if ((a==0) && (b==0)){  
    WRITELN ("trivial");}  
}