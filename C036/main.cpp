#include <iostream>

using namespace std;

int main()
{
    int n,a,b,i;
    cin >> n;
    for (i=1;i<=n;i++) {
        cin >> a;
        cin >> b;
        if (a%2==0) a++;
        if (b%2==0) b--;
        cout << "Case " << i << ": " << (a+b)*((b-a)/2+1)/2 << endl;
    }
    return 0;
}
