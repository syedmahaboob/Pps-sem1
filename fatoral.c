#include<stdio.h>
void main()
{
    int i,n,f;
    printf("enter n value");
    scanf("%d",&n);


    if (n<0)
    printf("no factoral");
    else
{
  f=1;
  for(i=1;i<n;i++)
    f=f*i;
}
printf("%d",f);
}
