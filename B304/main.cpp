#include <iostream>
#include <cstring>

using namespace std;

char stack[100]={};
int top=0;

char pop() {char c; c=stack[top]; top--; return c;}
void push(char c) {top++; stack[top]=c;}

int main()
{
    string str;
    char ch,temp;
    int i,j,n;
    bool wrong;
    cin >> n;
    cin.ignore();
    for (j=1;j<=n;j++) {
		getline(cin, str);
		top=0;
	    wrong=false;
	    for (i=0;i<=str.length()-1;i++) {
	        ch=str[i];
			
			switch (ch) {
				case '(':
				case '[':
					push(ch);
					break;
				case ')':
					temp=pop();
					if (temp!='(') wrong=true;
					break;
				case ']':
					temp=pop();
					if (temp!='[') wrong=true;
					break;
			}
	        if (wrong==true) break;
	    }
	    if (str.length()==0) cout << "Yes\n";
	    else if (wrong==true||top>0) cout << "No\n";
		else cout << "Yes\n";
	}
    return 0;
}
