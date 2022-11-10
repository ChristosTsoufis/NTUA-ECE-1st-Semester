#include "pzhelp"  
#include <iostream>  
#include <cstdlib>  
#include <ctime>  
using namespace std;  
int maximum (int array[100], int size);  
int minimum (int array[100], int size);  
int main(){  
  int number1, number2;  
  cin >> number1 >> number2;  
  int array [number1] [number2];  
  int t, i;  
  for (t=0; t<number1; ++t){  
    for (i=0; i<number2; ++i){  
      cin >>array [t] [i] ;  
    }  
  }  
int mini [number2],maxi[number1],temp_array[100] ; //for storing columns  
int finalmin=0,finalmax=0;  
  
for (i=0; i<number1; i++){//grammes  
  for(t=0; t<number2; t++){  
  temp_array[t]=array[i][t];  
  }  
  mini[i]=minimum(temp_array,number2);  
  
  
}  
finalmax=maximum(mini,number1);  
/*for (i=0;i<number1;i++){ 
  WRITELN( mini[i]); 
} 
WRITELN(maximum(mini,number2));*/  
for (t=0; t<number2; t++){//sthles  
  for(i=0; i<number1; i++){  
    temp_array[i]=array[i][t];  
  
  }   
 maxi[t]=maximum(temp_array,number1);  
//cout<<maxi[t];  
}  
finalmin=minimum(maxi,number2);  
/*for (t=0;t<number2; t++){ 
  WRITELN( maxi[t]); 
} 
WRITELN(minimum(maxi,number2)); 
*/  
cout<<finalmin<<endl;  
cout<<finalmax<<endl;  
return 0;  
}  
int maximum (int array[100], int size){  
  int maxValue = 0, i;  
  for (i=0; i<size; i++){  
    if (array[i]>maxValue){  
      maxValue = array[i];  
    }  
  }  
  return maxValue;  
}  
int minimum (int array[100], int size){  
  int minValue = array[0];  
    
  for (int i=0; i < size; i++){  
    if (array[i] < minValue){  
      minValue = array[i];  
    }  
  }  
  return minValue;  
}