#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i,success=1,done=0;
    char str[100],str2[100];
    cin.getline(str, 100);
    cout << "�K�X�]�w���\\!!!" << endl;
    while (done!=1) {
        success=1;
        cout << "�п�J�K�X�G" << endl;
        cin.getline(str2, 100);
        for (i=0;i<=strlen(str);i++)
            if (str[i]!=str2[i])
                success=0;
        if (success==0) {
            cout << "�K�X��J���~\!!!" << endl;
        } else {
            cout << "�n�J���\\!!!" << endl;
            done=1;
        }
    }
}
