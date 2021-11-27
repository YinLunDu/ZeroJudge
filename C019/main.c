#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000];
    int count,i;
    while (scanf("%s",&str)!=EOF) {
        count=0;
        for (i=0;i<=strlen(str)-1;i++) {
            if ('a'<=str[i]&&str[i]<='z') count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
