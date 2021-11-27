#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;
    while (scanf("%d %d",&n,&m)!=EOF) {
        if (n>m) {
            printf("輸入錯誤\n");
            break;
        }
        if (n%3!=0) n+=3-n%3;
        m-=m%3;
        for (i=n;i<=m;i+=3) printf("%d ",i);
        printf("\n");
    }
    return 0;
}
