#include<stdio.h>
int fib(int n);
int  main()
{
    int n,i;
    printf("enter nth term for fibonacci series");
    scanf("%d ",&n);

    printf("fibonacci series upto %d is\n");
for(i=0;i<n;i++)
{
    printf("%d",fib(i));
}
}
int  fib (int n)
{
    if(n==0)
    return 0;
    if(n==1);
    return 1;

    return fib (n-1)+fib(n-2);
}

