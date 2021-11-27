#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000];
    int yes,i;
    while (gets(str)!=NULL) {
        yes=1;
        for (i=0;i<=strlen(str)-1;i++) {
            if (str[i]!=str[strlen(str)-i-1]) {
                yes=0;
            }
            if (yes==0) break;
        }
        if (yes==1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
