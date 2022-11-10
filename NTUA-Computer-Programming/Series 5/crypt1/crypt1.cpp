#include "pzhelp"  
PROGRAM   
{  
  char res;  
  int c;  
  char met[26];  
  for (int i=0;i<26;i++) met[i]=getchar();  
  SKIP_LINE();  
  for (int i=0;i<26;i++)  
    if ((met[i]<'a') || (met[i]>'z')){  
      WRITELN ("error");  
      return 0;  
    }  
    for (int i=0;i<26;i++){  
      for (int j=i+1 ;j<26;j++)  
       if (met[j]==met[i]){  
         WRITELN  ("error");  
         return 0;  
       }  
    }  
      while ((c=getchar())>=0)  
  {      
    if ((c<='z')&& (c>='a')) res = met[c-97];  
    else if((c<='Z') && (c>='A')) res = met[c-65]-32;  
    else res = c;  
    WRITE (res);  
  }  
}  