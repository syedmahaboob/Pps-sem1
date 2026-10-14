#include<stdio.h>
void main()
{

    int n,i,rem,arm;
    printf("enterno");
    scanf("%d",&n);
    while(n!=0)
    {
        rem+n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    if(arm==n)
    printf("given numbersis armstrong");
    else
    printf("given numbersis non armstrong");

}
