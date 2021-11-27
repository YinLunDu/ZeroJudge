#include<iostream>
#include<cstdlib>
#include <stdio.h>
using namespace std;

int main(){
	int a,b,c,i;
	char ch;
	cin>>a; getchar();
	for(i=1;i<=a;i++){
		cout<<"Case "<<i<<":";
		while((ch=getchar())!='\n'){
			cin>>b;
			for(c=1;c<=b;c++){
				cout<<ch;
			}
		}
		cout<<endl;
	}

}
