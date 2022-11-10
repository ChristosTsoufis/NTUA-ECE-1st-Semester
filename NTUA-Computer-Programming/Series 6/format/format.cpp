#include <iostream>  
#include <cstdio>  
  
using namespace std;  
int main() {  
  char a[10000][21], c;  
  int g[10000];  
  int l, i, j, w, k;  
  i = 0;  
  j = 0;  
  c = getchar();  
  while (c != EOF) {  
    while ((c != 32) && (c != EOF) && (c != '\n')) {  
      a[i][j] = c;  
      c = getchar();  
      j++;  
    }  
    if (j != 0)  
    {  
      g[i] = j;  
      i++;  
    }  
  
    j = 0;  
    if (c != EOF) c = getchar();  
  }  
  g[i] = 0;  
  l = i;  
  w = 0;  
  while (w<l) {  
    int temp_sum = 0;  
    k = w;  
    while (k<l && temp_sum + g[k] + 1 <= 61) {  
      temp_sum = temp_sum + g[k] + 1;  
      k++;  
    }  
    int div = 0, kena = 0, mod, oles;  
    kena = 60 - (temp_sum - 1);  
    oles = k - w;  
  
    if (oles > 1)  
    {  
      div = kena / (oles - 1);  
      mod = kena % (oles - 1);  
    }  
  
    for (int m = w; m < k; m++) {  
      for (i = 0; i<g[m]; i++)  
        cout << a[m][i];  
  
      // Last word.  
      if (m == k - 1) continue;  
  
      if (k < l) {  
        if (m >= k - mod - 1) {  
          for (i = 0; i<div + 2; i++) {  
            cout << ' ';  
          }  
        }  
        else if (m != k){  
          for (i = 0; i<div + 1; i++) {  
            cout << ' ';  
          }  
        }  
      }  
      else  
      {  
        cout << ' ';  
      }  
    }  
    w = k;  
    cout << endl;  
  }  
  
  return 0;  
} 