#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,m1,h2,m2;
    while (1) {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if ((h1==0)&&(m1==0)&&(h2==0)&&(m2==0)) break;
        if ((h1*60+m1)>(h2*60+m2)) h1-=24;
        printf("%d\n",(h2*60+m2)-(h1*60+m1));
    }
    return 0;
}
