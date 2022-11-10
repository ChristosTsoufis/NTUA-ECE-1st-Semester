#include "pzhelp"  
#include <stdbool.h>  
  
PROGRAM {  
  int n, i;  
  char   a[21];  
  bool flag = true;  
  REAL per=0;  
  n = READ_INT ();  
  SKIP_LINE();  
  FOR (i,1 TO n) {  
    flag=true;  
    int j = 0;  
    a[0] = getchar();  
    j=1;  
    while (j<21 && a[j-1] != '\n'){  
      a[j] =getchar();  
      j=j+1;   
    }  
   if (j == 21 && a[20]!='\n' ){  
           WRITELN ("error");  
           SKIP_LINE();  
   }  
   else if(a[0] == '\n' ){  
        WRITELN ("empty");  
   }  
   else {  
    int x = 0, y = j - 2;  
    while (x <= y) {  
      if (a[x] != a[y]) {  
        flag = false;  
        break;  
      }  
      x++;  
      y--;  
    }  
    if (flag == true){  
      WRITELN ("yes");  
      per=per+1;  
    }  
    else WRITELN ("no");  
   }  
  }  
  per=per/n*100;  
  WRITELN(FORM(per,0,3));  
}