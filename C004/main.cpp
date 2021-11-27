#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i,success=1,done=0;
    char str[100],str2[100];
    cin.getline(str, 100);
    cout << "密碼設定成功\!!!" << endl;
    while (done!=1) {
        success=1;
        cout << "請輸入密碼：" << endl;
        cin.getline(str2, 100);
        for (i=0;i<=strlen(str);i++)
            if (str[i]!=str2[i])
                success=0;
        if (success==0) {
            cout << "密碼輸入錯誤\!!!" << endl;
        } else {
            cout << "登入成功\!!!" << endl;
            done=1;
        }
    }
}
