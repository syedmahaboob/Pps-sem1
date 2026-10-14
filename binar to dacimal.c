#include<stdio.h>
#include<math.h>
void main()
{
int deci,bin=0,i=1,rem;
printf("enter number in binary (0s and 1s)");
scanf("%d",&bin);

while(bin!=0)
{
 rem= bin%10;
 bin=bin/10;
 deci=deci+rem*pow(2,i);
 i++;
}
printf("%d",deci);
}

