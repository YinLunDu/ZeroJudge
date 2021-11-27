#include <iostream>

using namespace std;

int main()
{
    long long int num[40]={0,1};
    int i,n,x,j;
    for (j=2;j<=39;j++)
        num[j]=num[j-2]+num[j-1];
    cin >> n;
    for (i=1;i<=n;i++) {
        cin >> x;
        for (j=0;j<=39;j++) {
            if (num[j]==x) break;
        }
        if (j<=39) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
