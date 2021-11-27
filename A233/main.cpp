#include <iostream>
#include <algorithm>

using namespace std;

int num[1000000];

int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=0;i<=n-1;i++)
        scanf("%d",&num[i]);
    sort(num,num+n);
    for (i=0;i<=n-1;i++)
        cout << num[i] << " ";
    cout << "\n";
    return 0;;
}
