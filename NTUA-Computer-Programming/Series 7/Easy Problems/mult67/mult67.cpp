#include "pzhelp"  
  
PROGRAM {  
  int N ;  
  N = READ_INT () ;  
  if ((N % 7 == 0) && (N % 6 != 0))  
    WRITELN ( "yes" ) ;  
  else  
    WRITELN ( "no" ) ;  
}  