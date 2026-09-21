#include<stdio.h>
int main()
{
  int i,j ,N,a[50];
  int temp,b[50];
  int x,y;

  printf("enter number of elements: "); //you want array size according to you.
 scanf("%d",&N); 
printf("---------------------------------\n"); 
     printf("enter the array:\n");//read arrat
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



    printf("range of index for reverse array like 1 to 3: "); //range 
    scanf("%d %d",&x,&y);
     j=y;
     //i=x;
  //change elements of index of array for reverse like only index 1-3
   if(j<=N)
 {
  for(i=x,j=y;i<j;i++,j--)  // swipe number
  {
 
    
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }

  printf("---------------------------------\n"); 
    printf("your array new is:\n");

   for(i=0;i<N;i++) // new array
  {
    
    printf("%d\n",a[i]);
  }
}
 else
 {
  printf("\n --> For reverse array your choice index is out of range.\n");//wrong range enter.
 } 

    printf("---------------------------------\n"); 
    return 0;
}
