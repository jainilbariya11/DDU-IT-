#include<stdio.h>
int main()
{
  int i ,N,a[10];
  int b,pos=0;

  printf("enter number of elements: ");
 scanf("%d",&N); 
printf("---------------------------------\n"); 
     printf("enter the array:\n");
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("---------------------------------\n"); 
  printf("your array is:\n"); 
   for(i=0;i<N;i++)
  {
    
    printf("%d\n",a[i]);
  }
printf("---------------------------------\n"); 
 printf("Enter the number to insert in array: ");
 scanf("%d",&b);
printf("---------------------------------\n"); 
printf("Enter the position: ");
 scanf("%d",&pos);
printf("---------------------------------\n"); 


for(i=N;i>pos;i--)
{
    a[i]=a[i-1];
}
 a[pos]=b;    

printf("your new array is:\n");
                           for(i=0;i<=N;i++)
                           {
    
                            printf("%d\n",a[i]);

                           }
                                
                        return 0;               
                }    
