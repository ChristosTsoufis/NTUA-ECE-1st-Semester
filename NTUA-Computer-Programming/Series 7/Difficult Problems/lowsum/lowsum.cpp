#include <iostream>
#include "pzhelp"
using namespace std;
int main(){
  long int n, mini, a[1000000];
  cin >> n;

  for(int i=0;i<n;i++)
    cin >> a[i];
  mini=1000000;
  for(int j=0;j<n-1;j++){
    for(int i=j+1;i<n;i++){
      if(abs(a[j]+a[i]) < mini)
        mini = abs(a[j]+a[i]);
    }
  }

  cout << mini << endl;

  return 0;
}