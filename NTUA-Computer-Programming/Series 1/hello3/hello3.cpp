#include "pzhelp"  
  
PROC hello () {  
  WRITELN("hello world");  
}  
  
PROGRAM {  
  for (int i = 0; i < 20; i++) hello();  
}