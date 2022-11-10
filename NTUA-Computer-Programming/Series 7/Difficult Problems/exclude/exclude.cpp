// O(n^2)

#include "pzhelp"  
  
PROGRAM{  
  int N,M,n,j;  
  //diabazei mhkos  
  N=READ_INT();  
  M=READ_INT();  
  int a[N],b[M];  
  //diabazei akolouthia  
  for(n=0;n<N;n++){  
    a[n]=READ_INT();}  
  for(int m=0;m<M;m++){  
    b[m]=READ_INT();}  
  //elegxos  
  for(int i=0;i<N;i++){  
    j=0;  
    while(a[i]!=b[j]){  
      j=j+1;  
      if(j==M){  
        WRITELN(a[i]);  
      }  
    }  
  }  
}  