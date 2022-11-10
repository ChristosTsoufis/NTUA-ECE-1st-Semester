#include "pzhelp"  
FUNC int gcd (int a, int b)  
{  
  a = abs(a); b = abs (b);  
  while (a > 0 AND b > 0)  
    if (a > b) a = a % b ;  
    else       b = b % a ;  
  return a+b;  
}  
PROGRAM {  
  int mod, div, k, l, m, n, N, i,j, ar1, ar2, par, ari, arithm, paranom ;  
  char f;    
  N = READ_INT ();  
  FOR (i , 1 TO N ){  
   SKIP_LINE ();  
    f = getchar();  
    k = READ_INT (); l = READ_INT ();  
    m = READ_INT (); n = READ_INT ();  
  
  if (l!=0 && n!=0 ){  
     
   ar1 = k * n ;  
   ar2 = m * l ;  
   par = l * n ;  
   ari = k * m ;  
     
   if (f == '+'){  
     arithm = ar1 + ar2;  
     paranom = par;  
   }  
   else if (f == '-'){  
     arithm = ar1 - ar2;  
     paranom = par;  
   }  
   else if (f == '*'){  
      arithm = ari;  
      paranom = par ;  
   }  
   else if (f == '/'){  
     arithm =  ar1;  
     paranom = ar2;    
   }  
   if (f=='/' and m==0) {WRITELN("error"); break;}  
   else{  
     if ((arithm < 0 and paranom >0) || (arithm > 0 and paranom < 0)) WRITE('-');  
     div = arithm / paranom ;  
     mod = abs(arithm) % abs(paranom) ;  
     j=gcd(abs(mod),abs(paranom));  
     mod = mod/j;   
     paranom =paranom/j;  
     WRITELN ( abs(div) , abs(mod) , abs(paranom) );  
  }  
  }  
  else WRITELN ( "error" ) ;  
  }  
}  