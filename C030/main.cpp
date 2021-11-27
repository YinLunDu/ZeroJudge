#include <iostream>

using namespace std;

int main()
{
    int i,n,j,num[10],success1,success2;
    cin >> n;
    cout << "Lumberjacks:\n";
    for (i=1;i<=n;i++) {
        success1=1; success2=1;
        for (j=0;j<=9;j++) {
            cin >> num[j];
            if (j!=0) {
                if (num[j]>num[j-1]) success1=0;
                if (num[j]<num[j-1]) success2=0;
            }
        }
        if (success1==1||success2==1)
            cout << "Ordered\n";
        else
            cout << "Unordered\n";
    }
    return 0;
}
