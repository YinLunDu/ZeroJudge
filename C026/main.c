#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num[10],sum=0,c=0;
    for (i=0;i<=9;i++) {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    sum/=10;
    for (i=0;i<=9;i++)
        if (num[i]>sum)
            c++;
    printf("����%d\n%d�Ӱ��󥭧�\n",sum,c);
    return 0;
}
