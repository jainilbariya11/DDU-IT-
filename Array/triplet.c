#include<stdio.h>
int main()
{
  int i ,j,k,N,a[10];
  int b;
  int triplet=0;

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
printf("the sum of three elements are : ");
  scanf("%d",&b);
  printf("b=%d\n",b);
  printf("---------------------------------\n");


for(i=0;i<N-2;i++)
{
    for(j=i+1;j<N-1;j++)
   {
    for(k=j+1;k<N;k++)
    {
     if(a[i]+a[j]+a[k]==b)
    {
     triplet++;
      printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
      break;
    }
   
   }
 }
}
 printf("Number of triplet whose sum = %d is: %d\n",b,triplet); 

 printf("---------------------------------\n");
 

return 0;
}