#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
double a1,b1,a2,b2;
cin>>a1>>b1>>a2>>b2;
double apot;
apot=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
cout<<setprecision(6)<<fixed<<apot<<"\n";
return 0;
}