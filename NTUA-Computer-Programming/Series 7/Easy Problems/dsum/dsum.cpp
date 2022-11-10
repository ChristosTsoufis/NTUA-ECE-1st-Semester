#include "pzhelp"  
PROGRAM{  
  int n,sum;  
  n=READ_INT();  
  sum=0;  
  while (n!=0){  
    sum = sum+(n%10);  
    n=n/10;  
  }  
  WRITELN(sum);  
} 