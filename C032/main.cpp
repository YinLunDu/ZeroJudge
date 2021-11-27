#include <iostream>

using namespace std;

int main()
{
    int i,n,m,sum,j,success,start,tmp,x;
    cin >> n;
    for (i=1;i<=n;i++) {
        int num[10000]={};
        success=0;
        cin >> start;
        cout << "Case #" << i << ": ";
        m=start;
        x=0;
        while (m>=1) {
            for (j=0;j<=x-1;j++)
                if (m==num[j]) {
                    m=0; break;
                }
            if (j<x) break;
            num[x]=m;
            x++;
            tmp=m;
            sum=0;
            while (tmp!=0) {
                sum+=(tmp%10)*(tmp%10);
                tmp/=10;
            }
            m=sum;
            if (m==1)
                success=1;
        }
        if (success==1) cout << start << " is a Happy number.\n";
        else cout << start << " is an Unhappy number.\n";
    }
    return 0;
}
