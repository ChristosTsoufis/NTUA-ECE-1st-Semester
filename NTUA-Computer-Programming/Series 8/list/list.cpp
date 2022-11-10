#include <iostream>  
#include <cstdio>  
#include "pzhelp"  
  
using namespace std;  
  
class list  
{  
  private:  
    int s;  
    pair<int, void*> *h = NULL;  
  
    void* getp(int k)  
    {  
      if (k < 0) return NULL;  
  
      void* p = h; int t = 0;  
      while (t < k && t++ < s)  
        p = ((pair<int, void*>*)p)->second;  
  
      return p;  
    }  
  
    void* getn(void *p)  
    {  
      return p ? ((pair<int, void*>*)p)->second : NULL;  
    }  
  
  public:  
    list()  
    {  
      s = 0;  
    }  
  
    bool empty()  
    {  
      return s == 0;  
    }  
  
    int size()  
    {  
      return s;  
    }  
  
    int add(int k, int x)  
    {  
      pair<int, void*> *l = (pair<int, void*>*)getp(k-2),   
        *t = new pair<int, void*>(x, k > 1 ? getn(l) : h);  
  
      // Breaks at invalid values, but in input I trust.  
      if (l) l->second = t;  
      else h = t;  
  
      s++;  
    }  
  
    int get(int k)  
    {  
      return ((pair<int, void*>*)getp(k-1))->first;  
    }  
  
    void remove(int k)  
    {  
      void *f = getp(k-2), *se = f ? getn(f) : h, *l = getn(se);  
      if (se) delete (pair<int, void*>*)se;  
      if (f) ((pair<int, void*>*)f)->second = l;  
      else h = (pair<int, void*>*)l;  
  
      s--;  
    }  
};  
  
int main()  
{  
  list lst;  
  int h, t1, t2;  
  
  scanf("%d", &h);   
  for(int i=0; i<h; i++)  
  {  
    scanf("%d %d", &t1, &t2);  
    lst.add(t1, t2);  
  }  
  
  scanf("%d", &h);  
  for (int i=0; i<h; i++)  
  {  
    scanf("%d", &t1);  
    lst.remove(t1);  
  }  
  
  scanf("%d", &h);  
  WRITELN( lst.size(), lst.get(h));  
  
  return 0;  
} 