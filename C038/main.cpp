#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,n,c,j;
    cin >> n;
    cin.ignore();
    for (i=1;i<=n;i++) {
        string str;
        getline(cin,str);
        c=0;
        for (j=0;j<=str.size();j++) {
            if ((str[j]=='A')||(str[j]=='E')||(str[j]=='I')||(str[j]=='O')||(str[j]=='U'))
                c++;
        }
        cout << c << endl;
    }
    return 0;
}
