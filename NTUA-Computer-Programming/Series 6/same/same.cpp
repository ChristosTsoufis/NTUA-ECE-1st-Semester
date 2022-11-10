#include "pzhelp"  
PROC merge (int a[],int first,int mid, int last){  
  int b[last-first+1];  
  int i=first, j=mid+1, k=0;  
  while (i<= mid AND j<=last)  
    if (a[i]<a[j]) b[k++]=a[i++];  
    else           b[k++]=a[j++];  
  while (i<=mid) b[k++]=a[i++];  
  while (j<=last) b[k++]=a[j++];  
  FOR (i,0  TO k-1) a[first+i]=b[i];  
}  
PROC mergesort (int a[], int first, int last){  
  int mid;  
  if (first >= last) return;  
  mid=(first+last)/2;  
  mergesort(a, first, mid);  
  mergesort(a,mid+1,last);  
  merge(a,first,mid,last);  
}  
PROGRAM{\  
  int a[50000], b[50000], N, min, max;  
  N = READ_INT();  
  bool flag = true;  
  for (int i=0;i<N;i++)  
    a[i]= READ_INT();  
  for (int i=0;i<N;i++)  
    b[i]=READ_INT();  
  mergesort (a, 0, N-1);  
  mergesort (b, 0, N-1);  
  for (int i=0;i<N;i++){  
    if (a[i]!=b[i]){  
      if(a[i]<b[i])  
        min=a[i];  
      else  
        min=b[i];  
      flag=false;  
      break;  
    }  
  }  
  if(flag)  
    WRITELN("yes");  
  else{  
    for (int i=N-1;i>=0;i--){  
      if (a[i]!=b[i]){  
        if(a[i]<b[i])  
          max=b[i];  
        else  
          max=a[i];  
        break;  
      }  
    }  
    WRITELN("no",min,max);   
  
  }  
  return 0;  
}