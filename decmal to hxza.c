#include<stdio.h>
void main()
{
int deci,hexa=0,i=1,rem;
printf("enter number in decimal");
scanf("%d",&deci);
while(deci!=0)
{
 rem= deci/2;
 deci=deci/16;
 hexa=hexa+rem*i;
 i=i*10;
}
printf("%d",bin);
}
