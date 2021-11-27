#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n,i,num,c,len;
    while (1) {
        cin >> n;
        if (n==0) break;
        num=0;
        len=0;
        while (n>0) {
            num=num*10+n%2;
            n/=2;
            len++;
        }
        cout << "The parity of ";
        c=0;
        bool a[50];
        for (i=0;i<=len-1;i++) {
            a[i]=num%10;
            num/=10;
            if (a[i]==1) c++;
            cout << a[i];
        }
        cout << " is " << c << " (mod 2)." << endl;

    }
    return 0;
}
