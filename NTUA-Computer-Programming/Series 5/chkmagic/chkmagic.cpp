#include "pzhelp"  
#include <iostream>  
#include <cstdio>  
#include <cstdlib>  
using namespace std;  
int main(){  
  int N,o,a[150][150],temp[150], n, m,l, i=0, k=0;  
  bool t=false;  
  N = READ_INT();  
  o=N*N;  
  if( N <= 150 ){    
    for (n=0; n<N; ++n){  
      for(m=0; m<N; ++m){  
        cin >> a[n][m];  
      }  
    }  
    for (l=0;l<=N*N-1;l++){  
      for (n=0;n<N;n++){  
        for  (m=0;m<N;m++){  
          if(a[n][m]==l){t=true;}  
        }  
      }if(t==true)o--;  
      t=false;  
    }  
    //elegxos arithmwn  
    int b[150*150];  
    for ( int i=1 ; i<(N*N); i++){  
      b[i] = 0;  
    }  
    for ( n=0; n<N; ++n){  
      for (m=0; m<N; ++m){  
        if ( b[a[n][m]] ==0 ){  
          b[a[n][m]] = 1;  
        }  
        else {  
          WRITELN("no");  
          return 0;  
        }  
      }  
    }  
    //athroisma grammwn  
    for ( int k=0; k <N ; k++){  
      temp[k]=0;  
      for (int i=0; i<N; i++){  
        temp[k] = temp[k] + a[k][i];  
      }  
    }      
    //athroisma sthlwn  
    for ( int i=0; i<N; i++){  
      temp[i]=0;  
      for (int k=0; k<N; k++){  
        temp[i]= temp[i] + a[k][i];  
      }  
    }    
    //athroisma diagwniwn  
    int sumd1=0;  
    int sumd2=0;  
    for ( int k=0; k<N; k++){  
      sumd1 = sumd1 + a[k][k];  
      sumd2 = sumd2 + a[k][N-1-k];  
    }  
    for ( int g=1 ; g<N-1 ; g++){   
      if ( temp[k+1]==temp[k] && temp[i+1] == temp[i] && sumd1==sumd2 && o==0){  
        WRITELN ("yes");  
        break;}  
      else {  
        WRITELN ("no");  
        break;}  
    }  
  
    return 0;  
  
  }  
}