#include <iostream>

using namespace std;

int main()
{
    int i,j,n,x,y,c=0;
    long long int num[50]={0,1};
    for (i=2;i<=49;i++)
        num[i]=num[i-1]+num[i-2];

    cin >> n;

    cin >> x >> y;
    if (y<x) swap(x,y);
    for (j=0;j<=49;j++) {
        if (num[j]>=x) {
            while (num[j]<=y) {
                cout << num[j] << endl;
                j++;
                c++;
            }
        }
    }
    cout << c << endl;

    for (i=2;i<=n;i++) {
        cout << "------" << endl;
        c=0;
        cin >> x >> y;
        if (y<x) swap(x,y);
        for (j=0;j<=49;j++) {
            if (num[j]>=x) {
                while (num[j]<=y) {
                    cout << num[j] << endl;
                    j++;
                    c++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
