#include <iostream>  
#include "pzhelp"  
#include <string>  
#include <cstring>  
#include <cctype>  
using namespace std;  
int main(){  
  char cypher[26] ;  
  gets(cypher);  
  int string_length=strlen(cypher);  
  
  //check string length  
  if (string_length != 26){  
    cout<<"error\n";  
    return 0;  
  }  
  
  //check if only char  
  int flag = 0;  
  int i=0;  
  while (cypher[i]){  
    if(!isalpha(cypher[i])){  
      flag++;  
    }  
    i++;  
  }  
  if (flag>0){  
    cout<<"error\n";  
    return 0;  
  }  
  
  //check if lower char  
  int flag2 = 0;  
  int k=0;  
  while (cypher[k]){  
    if(!islower(cypher[k])){  
      flag2++;  
    }  
    k++;  
  }  
  if (flag2>0){  
    cout<<"error lower\n";  
    return 0;  
  }  
  
  //check if duplicates  
  int len,v=1;  
  len=string_length;  
  for (int i = 0; i<len; i++){  
    for (int j=i+1; j<len;j++){  
      if(cypher[i]==cypher[j]){  
        if(v==1 && cypher[j] != '\0'){  
          cout<<"error\n";  
          return 0;  
        }  
        cypher[j] = '\0';  
        v++;  
      }  
    }  
    v=1;  
  }  
  
  //text encryption  
  
  char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};  
  
  char alpha_upper[26]={'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};                   
  
  char mode[50];  
  gets(mode);  
  int j;  
  if (mode[0] == 'e'){  
    i=0;  
    //char cypher_text[256];  
    //gets(cypher_text);  
    //encryption  
    char to_encrypt;  
    int found = 0;  
    while ((to_encrypt = getchar()) >=0){  
      //for(i=0;i<strlen(cypher_text);i++){  
      for(j=0;j<26;j++){  
        //if small  
        //if(alpha[j]==cypher_text[i]){  
        if(to_encrypt==alpha[j]){    
          //cypher_text[i]=cypher[j];  
          printf("%c",cypher[j]);  
          found = 1;  
          break;  
        }  
        //if capital  
        else if (to_encrypt == toupper(alpha[j])){  
          // if(alpha_upper[j]==cypher_text[i]){  
          // cypher_text[i]=toupper(cypher[j]);  
          printf("%c",toupper(cypher[j]));  
              found = 1;  
              break;  
              }  
              }  
              if (!found)  
              printf("%c", to_encrypt);  
              found = 0;  
              }  
              //cout<<cypher_text;  
              } else if (mode[0] == 'd') {  
              //===========================================================================================  
              //char cypher_decrypted[256];  
              char to_decrypt;  
              int found = 0;  
              //gets(cypher_decrypted);  
              while ((to_decrypt = getchar()) >= 0){  
              //for(i=0;i<strlen(cypher_decrypted);i++){  
              for(j=0;j<26;j++){  
              //if (cypher_decrypted[i]==cypher[j]){  
                if(to_decrypt == cypher[j]){  
                  //cypher_decrypted[i]=alpha[j];  
                  printf("%c", alpha[j]);  
                  found = 1;  
                  break;  
                }  
                //else if(cypher_decrypted[i]==toupper(cypher[j])){  
                else if (to_decrypt == toupper(cypher[j])){  
                  //cypher_decrypted[i]=alpha_upper[j];  
                  printf("%c", alpha_upper[j]);  
                  found = 1;  
                  break;  
                }}  
              if (!found)  
                printf("%c", to_decrypt);  
  
              found = 0;  
              // }  
              //  cout<<cypher_decrypted;  
              // }  
              }//gets(cypher_decrypted);}  
              }  
    //===========================================================================================  
  
  
    return 0;  
    }  