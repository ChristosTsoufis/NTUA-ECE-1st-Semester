#include "pzhelp"  
PROGRAM {  
int n, m;  
n=READ_INT();  
m=READ_INT();  
if ( n%2==0 && m%2==0 )  
  WRITELN ("2");  
else if ( n%2==0 || m%2==0)  
  WRITELN ("1");  
else  
  WRITELN ("0");  
}  