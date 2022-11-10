#include "pzhelp"  
  
PROGRAM { // addsub  
  // prosthesi klasmatwn  
  int k, l, m, n, ar1, ar2, par ;  
  
  k = READ_INT (); l = READ_INT(); m = READ_INT (); n = READ_INT();  
  ar1 = k * n ;  
  ar2 = m * l ;  
  par = l * n ;  
  
  WRITELN( ar1 + ar2, par );  
}  