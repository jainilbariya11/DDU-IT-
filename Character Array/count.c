#include<stdio.h>

void main()
{
  char a[100];
  int i=0,word=0,tab=0,line=0,space=0,w;
  
  scanf("%c",&a[i]);
while(a[i]!='*')
  {
    i++;
    scanf("%c",&a[i]);
   }
  a[i]='\0';
  i=0;
  if(a[0]!='\0')
  {
    word++;
    line++;
   }
  while(a[i]!='\0')
  {
     if(a[i]==' ')
     {
       space++;
      }
    if(a[i]=='\t')
     {
     tab++;
     }
    if(a[i]=='\n')
    {
     line++;
    }
   i++;
  }
  w=word+space+line+tab-1;
   printf("word=%d",w);
   printf("line=%d",line);
   printf("tab=%d",tab);
   printf("tab=%d",space);
   printf("character=%d",i);
 }