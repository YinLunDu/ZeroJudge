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
    cin.ignore(); //忽略換行
    while (n-- && getline(cin,str) ){
        stringstream ss;
        ss << str;
        string cha;
        while (ss >> cha) //從一行字串流中把空格分開的字串一個個讀進來
             cout << m[cha];
        cout << endl;
    }
    return 0;
}
