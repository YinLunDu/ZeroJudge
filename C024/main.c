#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char str[100];
    while (gets(str)!=NULL) {
        for (i=0;i<=strlen(str);i++)
            if (str[i]!=' ')
                printf("%c",str[i]);
        printf("\n");
    }
}
