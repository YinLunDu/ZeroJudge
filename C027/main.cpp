#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int i,n,m,middle,sum,j;
    cin >> n;
    for (i=1;i<=n;i++) {
        int num[100]={};
        sum=0;
        cin >> m;
        for (j=0;j<=m-1;j++) {
            cin >> num[j];
        }
        sort(num,num+m);
        middle=num[(int)m/2];
        for (j=0;j<=m-1;j++) {
            sum+=abs(num[j]-middle);
        }
        cout << sum << endl;
    }
    return 0;
}
