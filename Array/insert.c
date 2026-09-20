#include<stdio.h>
int main()
{
  int i ,N,a[50];
  int b,pos=0;

  printf("enter number of elements: ");//you want array size
 scanf("%d",&N); 
printf("---------------------------------\n"); 
     printf("enter the array:\n");
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("---------------------------------\n"); 
  printf("your array is:\n"); //print array
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

for(i=N;i>pos;i--)//loop
{
    a[i]=a[i-1];
}
  printf("a[%d] = %d\n",pos,b);
 a[pos]=b;    
printf("---------------------------------\n"); //decoration
printf("your new array is:\n");
                           for(i=0;i<=N;i++)
                           {
    
                            printf("%d\n",a[i]);

                           }
  printf("---------------------------------\n"); 
                                
                        return 0;               
                }    
