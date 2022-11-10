#include "pzhelp"  
PROGRAM {  
  int n, m, k;  
  n = READ_INT();  
  m = READ_INT();  
  k = n + m ;  
  if ( k%100 == 42 )  
    WRITELN ("yes");  
  else  
    WRITELN ("no");  
}  
