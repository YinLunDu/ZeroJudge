#include <iostream>
#include <sstream>
#include <map>
using namespace std ;
int main(){
    int n;
    string str;
    map<string, char> m={
    {".-",'A'},{"-...",'B'},{"-.-.",'C'},{"-..",'D'},
    {".",'E'},{"..-.",'F'},{"--.",'G'},{"....",'H'},
    {"..",'I'},{".---",'J'},{"-.-",'K'},{".-..",'L'},
    {"--",'M'},{"-.",'N'},{"---",'O'},{".--.",'P'},
    {"--.-",'Q'},{".-.",'R'},{"...",'S'},{"-",'T'},
    {"..-",'U'},{"...-",'V'},{".--",'W'},{"-..-",'X'},
    {"-.--",'Y'},{"--..",'Z'}};
    cin>>n;
    cin.ignore(); //��������
    while (n-- && getline(cin,str) ){
        stringstream ss;
        ss << str;
        string cha;
        while (ss >> cha) //�q�@��r��y����Ů���}���r��@�ӭ�Ū�i��
             cout << m[cha];
        cout << endl;
    }
    return 0;
}
