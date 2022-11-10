#include "pzhelp"  
PROGRAM {  
/*  int n, a[3]; 
  for(n=0;n<3;n++){ 
  a[n]=READ_INT(); 
  } 
  int min ; 
  min = a[0];  
  for(n=0;n<3;n++){ 
    if( a[n+1] <= a[n] ){ 
      min=a[n+1]; 
    } 
  } 
  WRITELN(min); 
} 
*/  
int a, b, c, min;  
a=READ_INT();  
b=READ_INT();  
c=READ_INT();  
min = a;  
if (b<a)  min=b;  
else if (c<a) min=c;  
WRITELN(min);  
}  
   