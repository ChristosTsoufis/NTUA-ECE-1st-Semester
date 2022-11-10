#include "pzhelp"  
  
PROGRAM {  
  int N ;  
    N = READ_INT () ;  
    if((N >= 100) && (N < 1000)) {  
      WRITELN ( "yes" );  
    }  
    else   
      WRITELN ( "no" ) ;  
}  