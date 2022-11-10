#include "pzhelp"  
PROGRAM {  
  int n,i;  
  n = READ_INT();  
  i=0;  
  if (n==0)  
    WRITELN("no");  
  else{  
    while ( n!=0){  
      n=n/10;  
      i++;}  
  if ( i%2==0)  
    WRITELN("yes");  
  else   
    WRITELN("no");  
}  
} 