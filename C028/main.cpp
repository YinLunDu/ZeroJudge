#include <iostream>

using namespace std;

int main()
{
    int i,n,num[100],m;
    cin >> n;
    for (i=0;i<=n-1;i++) cin >> num[i];
    m=0;

    for (i=0;i<=n-1;i++) {
        if (num[i]>m) {
            m=num[i];
        }
    }
    for (i=0;i<=n-1;i++) {
        if (num[i]==m) {
            num[i]=-100;
        }
    }
    cout << m << " ";

    m=0;
    for (i=0;i<=n-1;i++) {
        if (num[i]>m) {
            m=num[i];
        }
    }
    for (i=0;i<=n-1;i++) {
        if (num[i]==m) {
            num[i]=-100;
        }
    }
    cout << m << " ";

    m=0;
    for (i=0;i<=n-1;i++) {
        if (num[i]>m) {
            m=num[i];
        }
    }
    for (i=0;i<=n-1;i++) {
        if (num[i]==m) {
            num[i]=-100;
        }
    }
    cout << m << " " << endl;
    return 0;
}
