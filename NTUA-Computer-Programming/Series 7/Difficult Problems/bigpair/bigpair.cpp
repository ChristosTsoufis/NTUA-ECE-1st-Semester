// O(n*logn)

#include <iostream>
#include <cstdio>
int main(){
long long int n,m,i;
scanf("%lld %lld",&n,&m);
long long int a[n+1],b[m+1];//gia na ksekino apo to stoixeio 1
for (i=0;i<n;i++){
scanf("%lld", &a[i+1]);
}
for (i=0;i<m;i++){
scanf("%lld",&b[i+1]);
}
a[0]=0;//almost axristi arxikopoiisi
b[0]=0;
long long int deiktis=m;//deiktis gia ton b pinaka
long long int pairs=0;
for (i=n;i>0;i--){//pairnoume ton pinaka a me tin "opisthen"
//an to "teleytaio" kathe fora stoixeio toy pinaka b ypervainei
//to stoixeio toy a pinaka tote meise to deikti sto b pinaka
while ((a[i]<=b[deiktis])&&(deiktis>0)) deiktis--;
//efoson o a kai o b einai taxinomimenoi tote an ena a[i] ypervainei
//ena b[j] tote ypevainei kai ola ta proigoumena tou b pinaka
//opote ayxise ta pairs kata to deikti sto b pinaka
pairs+=(deiktis);
}
printf("%lld",pairs);
printf("\n");
return 0;
}