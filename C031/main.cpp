#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,i,j,rev;
    while (1) {
        char str[100]={};
        cin >> n;
        if (n==0)
            break;
        else
            cin >> str;
        rev=strlen(str)/n;
        for (i=0;i<=strlen(str)-1;i++) {
            for (j=0;j<=rev-1;j++)
                cout << str[i+rev-j-1];
            i+=rev-1;
        }
        cout << "\n";
    }
    return 0;
}
