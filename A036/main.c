#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,i,sum=0;
    scanf("%d %d",&a,&b);
    c=a+a%2;
    d=b-b%2;
    for (i=c;i<=d;i+=2) {
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
