#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",((b-b%2)-(a+a%2))/2+1);
    return 0;
}
