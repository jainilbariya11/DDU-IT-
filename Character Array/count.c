#include<stdio.h>

void main()
{
  char a[100];
  int i=0,word=0,tab=0,line=0,space=0,w;
  printf("-----------------------------------------------------------------\n");  
  printf("\033[0;31m||\" NOTE : WHENEVER PRESS '*' THE STRING IS END .\"||");//note with color change
  printf("\n-----------------------------------------------------------------\n"); 
    printf("\033[0;37m\n");//color change
  printf("Enter the string : \n");
  scanf("%c",&a[i]); //string enter

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
  while(a[i]!='\0')//check
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
  printf("---------------------------------\n"); 
  
  w=word+space+line+tab-1;
   printf("word=%d\n",w);  //print the answer.
   printf("line=%d\n",line);
   printf("tab=%d\n",tab);
   printf("space=%d\n",space);
   printf("character=%d\n",i);

   printf("---------------------------------\n"); 
 }