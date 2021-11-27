#include <iostream>

using namespace std;

int main()
{
    int i,j,n,m,num[50],success,c,len;
    cin >> n;
    for (i=1;i<=n;i++) {
        cin >> m;
        len=-1;
        for (j=0;j<=m-1;j++) {
            cin >> num[j];
            len++;
        }
        success=1;
        if (num[0]%2==0) {
            j=1;
            while (j<=len) {
                if (num[j]%2!=j%2) success=0;
                j++;
            }
        } else {
            j=1;
            while (j<=len) {
                if (num[j]%2!=(j+1)%2) success=0;
                j++;
            }
        }
        if (success==1) cout << "Pass" << endl;
        else cout << "Fail" << endl;
    }
    return 0;
}
