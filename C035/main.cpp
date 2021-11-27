#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    while (1) {
        cin >> n;
        if (n==0) break;
        while (n>=10) {
            sum=0;
            while (n>0) {
                sum+=n%10;
                n/=10;
            }
            n=sum;
        }
        cout << n << endl;
    }
    return 0;
}
