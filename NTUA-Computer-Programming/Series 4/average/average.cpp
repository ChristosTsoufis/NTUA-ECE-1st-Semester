#include "pzhelp"  
#include <iostream>  
#include <cstdlib>  
#include <cstdio>  
#include <cmath>  
using namespace std;  
  
int main(void){  
  float array_of_average_columns[100];  
  float array_of_average_rows[100];  
  float temp[100];  
  int  number1, number2;  
  cin >> number1 >> number2;  
  float array [number1] [number2];  
  int t,i;  
  for (t=0; t<number1; ++t){  
    for (i=0; i<number2; ++i){  
      cin >> array [t][i];  
    }  
  }  
  /*for (t=0; t<number1; ++t){ 
    for (i=0; i<number2; ++i){ 
      cout << array[t][i] << "\t"; 
    } 
    cout << "\n"; 
  }*/  
  for (int k=0; k<number2; k++){  
     temp [number1] = 0.0;  
    for (int i=0; i<number1; i++)  
    {  
      temp[i] = array[i][k];  
    }  
    float sum=0.0;  
    float average=0.0;  
    for (i = 0; i<number1; i++)  
    {  
      sum = sum + temp[i];  
    }  
    //cout <<sum/number1 <<"\n";  
    array_of_average_columns[k]=sum/(float)number1;  
  }  
  float sum=0.0;  
  float average=0.0;  
  for(i=0; i<number2; i++){  
    sum=sum + array_of_average_columns[i];  
  }  
  float result = sum/(float)number2;  
  printf("%0.3lf\n", result );  
  ////////////////////////////////////////////////////////  
  for (int k=0; k<number1; k++){  
     temp [number2] =0.0;  
    for (int i=0; i<number2; i++){  
      temp[i] = array[k][i];  
    }  
    float sum2=0.0;  
    float average2=0.0;  
    for (i=0; i<number2; i++){  
      sum2=sum2 + temp[i];  
    }  
    //cout << sum2/number1 <<"\n";  
    array_of_average_rows[k]=sum2/number1;  
  }  
  float sum2=0.0;  
  float average2=0.0;  
  for(i=0;i<number1; i++){  
    sum2=sum2 + array_of_average_rows[i];  
  }  
  float result2= sum2/(float)number2;  
  printf("%0.3lf\n", result2 );  
  /////////////////////////////////////////////////////  
  return 0;  
}