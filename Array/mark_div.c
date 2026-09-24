#include<stdio.h>
int main()
{
  int i ,N,a[50];
  int grp[11]={0};//declare grp of distribution of marks

  printf("enter number of students: ");//no of student.
 scanf("%d",&N); 
printf("---------------------------------\n"); 
     printf("enter the marks:\n");//enter marks
     printf("\"NOTE: ENTER MARKS<=100.\"\n");
  for(i=0;i<N;i++)
  {   
    abc: //goto label
    scanf("%d",&a[i]);
    if(a[i]>100)
    {
      goto abc; // use goto if enter >100 marks.
    }
    grp[a[i]/10]++;   
  }
  printf("---------------------------------\n"); 
  printf("your students marks are:\n"); //print marks
   for(i=0;i<N;i++)
  {
    
    printf("%d\n",a[i]);
  }
printf("---------------------------------\n");
printf("distribution of marks:\n");
printf("---------------------------------\n");
for(i=0;i<10;i++)
{
    printf("%d-%d: %d students\n",i*10,(i+1)*10-1,grp[i]);//range
   
}
for(i=0;i<N;i++)//if any student get 100 marks
{
 if(a[i]==100)
    {
        printf("100: %d students\n",grp[10]);
    }
} 
printf("---------------------------------\n");   
return 0;
}
