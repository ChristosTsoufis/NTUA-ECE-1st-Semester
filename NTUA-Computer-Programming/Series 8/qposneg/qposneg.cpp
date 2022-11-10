#include <iostream>  
#include <cstdio>  
#include <vector>  
#include "pzhelp"  
  
using namespace std;  
  
class queue  
{  
  private:  
    pair<int, void*> *f=NULL, *b=NULL;  
  
  public:  
    bool empty()  
    {  
      return b == NULL;  
    }  
    void enqueue(int x)  
    {  
      pair<int, void*> *t=new pair<int, void*>(x, NULL);  
      if (b) b->second = t; else f=t;  
      b=t;  
    }  
    int dequeue()  
    {  
      if (!f) return 0;  
      pair<int, void*> t = *f;  
      delete f;  
      f=(pair<int, void*>*)t.second;  
      if (!f)b=f;  
      return t.first;  
    }  
    int peek()  
    {  
      return f ? f->first : 0;  
    }  
};  
  
int main()  
{  
  int t, v=1;  
  queue p,n;  
  
  while (scanf("%d", &t)>0)  
    t>0 ? p.enqueue(t) :  n.enqueue(t);  
  
  while (!p.empty() && !n.empty() && (v= p.dequeue() == -n.dequeue()));  
  
  if (!v || !p.empty() || !n.empty()) WRITELN("no");  
  else WRITELN("yes");  
  
  return 0;  
} 