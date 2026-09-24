#include<stdio.h>
#include<string.h>
 void main()
 {
    char a[100],b;
    int i,j,k;
    scanf("%s",a);
    j=strlen(a);
    for(i=0;i<j/2;i++)
    {
        k=a[i];
        a[i]=a[j-i-1];
        a[j-i-1]=k;
    }
    printf("The reverse of the given word is %s",a);
 }
