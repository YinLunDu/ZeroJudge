#include <iostream>
#include <list>
#include <cstring>
using namespace std;

int main(){

    string s;
    int i;
    while (getline(cin, s)) //Åª¤@¦æ¦r¦ê
    {
        if (s.size()==0) break;
        list<char> strlist;
        list<char>::iterator it=strlist.end();
        i=0;
        while (i<s.size()) {
            if (s[i]=='[') it=strlist.begin();
            else if (s[i]==']') it=strlist.end();
            else strlist.insert(it, s[i]);
            i++;
        }
        for (it=strlist.begin();it!=strlist.end();it++)
            cout << *it;
        cout << "\n";
    }

    return 0;
}
