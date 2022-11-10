#include <iostream>  
#include <algorithm>  
#include <cmath>  
#include <cstdio>  
#include "pzhelp"  
using namespace std;  
  
struct node  
{  
  int data;  
  node *right, *left;  
  
  node(int x) { data = x; right = left = NULL; }  
};  
  
struct parent  
{  
  int info, h, f;  
  node *par;  
  
  parent(int i, int _h, int _f, node *p)  
  { info = i; h = _h; par = p; f = _f; }  
};  
  
class bstree  
{  
  private:  
    node *p0;  
    int curHeight, maxima[2];  
  
    parent findParent(node *p, int x, int h)  
    {  
      if (p->data == x) return parent(2, 1, 1, p); // x is p0.  
  
      node *next; int d;  
      if (x > p->data) { next = p->right; d = 1; }  
      else { next = p->left; d = 0; }  
  
      if (!next) return parent(d, h, 0, p);  
      if (next->data == x) return parent(d, h + 1, 1, p);  
      return findParent(next, x, h+1);  
    }  
  
    void recIn(node *n)  
    {  
      if (!n) return;  
      recIn(n->left);  
      printf("%d ", n->data);  
      recIn(n->right);  
    }  
  
    void recPre(node *n)  
    {  
      if (!n) return;  
      printf("%d ", n->data);  
      recPre(n->left);  
      recPre(n->right);  
    }  
  
    void recPost(node *n)  
    {  
      if (!n) return;  
      recPost(n->left);  
      recPost(n->right);  
      printf("%d ", n->data);  
    }  
  
  public:  
    bstree()  
    {  
      p0      = NULL;  
      curHeight = 1;    
      maxima[0] = 0x3f3f3f3f;  
      maxima[1] = -1;   
    }  
  
    int height() { return curHeight; }  
  
    void insert(int x)  
    {  
      if (x > maxima[1]) maxima[1] = x;  
      if (x < maxima[0]) maxima[0] = x;  
  
      if (!p0) { p0 = new node(x); return; }  
  
      parent p = findParent(p0, x, 1);  
      if (p.info == 1) p.par->right = new node(x);  
      else p.par->left = new node(x);     
  
      if (p.h + 1 > curHeight) curHeight = p.h + 1;  
    }  
  
    int search(int x)  
    {  
      parent p = findParent(p0, x, 1);  
      return p.f == 1 ? p.h : 0;  
    }  
  
    int min() { return maxima[0]; }  
    int max() { return maxima[1]; }   
  
    void inorder()  
    { recIn(p0); }   
  
    void preorder()  
    { recPre(p0); }  
  
    void postorder()  
    { recPost(p0); }  
};  
  
int main()  
{  
  bstree tr;    
  int N, t; scanf("%d", &N);  
  for (int i=0; i<N; i++)  
  {  
    scanf("%d", &t);  
    tr.insert(t);  
  }  
  printf("%d\n%d %d\n", tr.height(), tr.min(), tr.max());  
  
  scanf("%d", &N);  
  for(int i=0; i<N; i++)  
  {  
    scanf("%d", &t);  
    printf(i == 0 ? "%d" : " %d", tr.search(t));  
  }  
  
  printf("\n");  
  tr.inorder();   WRITELN("end");  
  tr.preorder();  WRITELN("end");  
  tr.postorder(); WRITELN("end");  
  
  return 0;  
}