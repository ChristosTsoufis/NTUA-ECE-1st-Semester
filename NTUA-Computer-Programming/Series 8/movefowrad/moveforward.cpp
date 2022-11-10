#include<iostream>  
#include<stdio.h>  
#include "pzhelp"  
  
using namespace std;  
  
class list {  
  public:  
    list();  
    bool empty();  
    int size();  
    void add(int k, int x);  
    int get(int k);  
    void remove(int k);  
    int searchMF (int x);  
  private :  
    struct node{  
      int info;  
      node *next;  
    };  
    node *lis;  
};  
  
  
list::list(){  
  lis = '\0';  
}  
  
list l;  
  
bool list::empty(){  
  return lis == '\0';  
}  
  
int list::size(){  
  int ans=0;  
  if (lis=='\0')  
    return ans;  
  ans++;  
  node *p;  
  p=lis;  
  while(p->next!='\0'){  
    ans++;  
    p=p->next;  
  }  
  return ans;  
}  
  
void list::add(int k, int x){  
  node *p, *q;  
  
  p = new node;  
  p->info = x;  
  p->next = '\0';  
  if(lis == '\0'){  
    lis = p;  
  }  
  else{  
    if(k==1){  
      p->next=lis;  
      lis=p;  
    }  
    else{  
      q = lis;  
      for(int i=1;i<k-1;i++)  
        q = q->next;  
      if(p!='\0'){  
        p->next=q->next;  
        q->next = p;  
  
      }  
    }  
  }  
}  
  
int list::get(int k){  
  node *p;  
  p=lis;  
  for(int i=0;i<k-1;i++){  
    p=p->next;  
  }  
  return p->info;  
}  
  
void list::remove(int k){  
  if(k==1){  
    node *q=lis;  
    lis=lis->next;  
    delete q;  
  }  
  else{  
    node *p;  
    p=lis;  
    for(int i=1;i<k-1;i++){  
      p=p->next;  
    }  
    if((p != '\0')&&(p->next!='\0')){  
      node *q = p->next;  
      p->next=q->next;  
      delete q;  
    }  
  }  
}  
  
int list::searchMF (int x){  
  node *q=lis;  
  int ans=1;  
  while(q->info!=x){  
    if(q->next=='\0')  
      return 0;  
    ans++;  
    q=q->next;  
  }  
  l.remove(ans);  
  l.add(1,x);  
  return ans;  
}  
  
int main(){  
  int n,m,tempk,tempx,apot=0;  
  
  
  n=READ_INT();  
  for(int j=0;j<n;j++){  
    tempk=READ_INT(); tempx=READ_INT();  
    l.add(tempk,tempx);  
  }  
  m=READ_INT();  
  for(int j=0;j<m;j++){  
    tempk=READ_INT();  
    apot+=l.searchMF(tempk);  
  }  
  
  WRITELN(apot);  
  
}