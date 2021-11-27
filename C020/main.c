#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a_1,a_n,d,num;
    scanf("%lld %lld %lld",&a_1,&a_n,&d);
    num=(a_n-a_1)/d+1;
    printf("%lld\n",(a_1+a_n)*num/2);
    return 0;
}
