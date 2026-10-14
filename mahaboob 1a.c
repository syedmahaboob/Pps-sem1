#include <stdio.h>
int main ()
{
    int a;
    printf("type a number");
    scanf("%d", &a);
    if(a==0)
        printf("zero");
    else if(a>0)
        printf("positive");
    else
    printf("negative");

}
