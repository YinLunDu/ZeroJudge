#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    while (scanf("%d",&n)!=EOF) {
        for (i=1;i<=n;i++) {
            for (j=1;j<=n;j++) {
                if (i+j>=n+1) printf("*");
                else printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}
