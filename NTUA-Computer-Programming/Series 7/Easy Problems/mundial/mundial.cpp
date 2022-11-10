#include "pzhelp"  
PROGRAM{  
  int year, a;  
  year = READ_INT();  
  if (year>=1930){  
  a=year - 1930 ;  
  if (a%4==0 && year!=1942 && year!=1946 )  
    WRITELN ("yes");  
  else  
    WRITELN("no");  
}  
else   
WRITELN("no");  
} 