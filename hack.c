#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d",&b0,&b1,&b2);
    int sum=0,total=0;
    if(a0>b0)
        sum++;
    if(a1>b1)
        sum++;
    if(a2>b2)
        sum++;
            if(sum==0)
                printf("%d\t",sum);
            else
                printf("%d\t",sum);
    if(a0<b0)
        total++;
    if(a1<b1)
        total++;
    if(a2<b2)
        total++;
        if(total==0)
            printf("%d\t",total);
        else
            printf("%d\t",total);
        if(a0==b0||a1==b1||a2==b2)
    return 0;
}
