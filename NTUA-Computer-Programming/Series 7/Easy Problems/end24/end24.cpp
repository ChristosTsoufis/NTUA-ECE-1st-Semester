#include "pzhelp"  
PROGRAM {  
  int N;  
    N = READ_INT();  
    N = N*N;  
    if( N%100==24)   
     WRITELN ("yes");  
    else  
     WRITELN ("no");  
}