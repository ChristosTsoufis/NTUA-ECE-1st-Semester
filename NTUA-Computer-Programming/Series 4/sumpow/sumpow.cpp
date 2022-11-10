#include "pzhelp"  
#include <math.h>  
  
PROGRAM {  
  int n,a[10], i, sum, a1, a2, a3, a4, a5, a6, a7, a8;  
  n = READ_INT ();  
  FOR (i, 0 TO 9){  
    a[i] = pow (i, n);  
  }  
  FOR (a1, 0 TO 9){  
    FOR (a2, 0 TO 9){  
      FOR (a3, 0 TO 9){  
        FOR (a4, 0 TO 9){  
          FOR (a5, 0 TO 9){  
            FOR (a6, 0 TO 9){  
              FOR (a7, 0 TO 9){  
                FOR (a8, 0 TO 9){  
  
                  sum = a[a1] + a[a2] + a[a3] + a[a4] + a[a5] + a[a6] + a[a7] + a[a8];  
  
                  if (a1*10000000 + a2*1000000 + a3*100000 + a4*10000 + a5*1000 + a6*100 + a7*10 + a8 == sum)  
                    WRITELN ( sum );  
                }  
              }  
            }  
          }  
        }  
      }  
    }  
  }  
}  