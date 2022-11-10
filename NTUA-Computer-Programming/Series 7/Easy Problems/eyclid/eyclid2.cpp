#include "pzhelp"
PROGRAM{
double a1,b1,a2,b2,res;
a1=READ_INT();
b1=READ_INT();
a2=READ_INT();
b2=READ_INT();
res=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
 WRITELN(FORM(res,0,6));
}