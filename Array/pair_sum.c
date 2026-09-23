#include<stdio.h>
int main()
{
  int i ,j,N,a[10];
  int b;
  int pair=0;

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
printf("the sum of two elements are : ");
  scanf("%d",&b);
  printf("b=%d\n",b);
  printf("---------------------------------\n");


for(i=0;i<N-1;i++)
{
    for(j=i+1;j<N;j++)
   {
    if(a[i]+a[j]==b)
    {
     pair++;
      printf("(%d,%d)\n",a[i],a[j]);
      break;
    }
   
   }
}
 printf("Number of pair whose sum = %d is: %d\n",b,pair); 

 printf("---------------------------------\n");
 return 0;
}