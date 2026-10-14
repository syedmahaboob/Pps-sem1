#include<stdio.h>
void main()
{
int deci,bin=0,i=1,rem;
printf("enter numbers in decimal");
scanf("%d",&deci);
while(deci=0)
{
 rem= deci%2;
 deci=deci/2;
 bin=bin+rem*i;
 i=i*10;
}
printf("%d",bin);
}
