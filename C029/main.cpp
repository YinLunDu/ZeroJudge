#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[1000],s[2];
    int count,i;
    while (cin.getline(str,1000)) {
        count=0;
        cin.getline(s,2);
        for (i=0;i<strlen(str);i++) {
            if (str[i]==s[0]) count++;
        }
        cout << count << endl;
    }
    return 0;
}
