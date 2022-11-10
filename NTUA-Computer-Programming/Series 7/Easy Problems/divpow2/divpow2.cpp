#include "pzhelp"  
PROGRAM{  
  int n, i;  
  n=READ_INT();  
  if (n%2==1)  
    WRITELN("0");  
  else if (n%2==0){  
    n=n/2;  
    i=1;  
    while(n%2!=1){  
      n=n/2;  
      i=i+1;}  
    WRITELN(i);}  
}