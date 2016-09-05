#include <iostream>
#include <string.h>
using namespace std;

void f(char *s1, char *s2){
	char *s = new char[strlen(s1)+strlen(s2)-1];
	strcpy(s,s1);
	strcat(s,s2);
	cout << "<"<<s<<">"<<endl;
	delete [] s;
}

void reverse(char *s){
	char *r = new char[strlen(s)];
	int j = strlen(s);
	for (int i = 0; i < j; i++){
		r[i] = s[j-1-i];
	}
	r[j] = '\0';
	cout<<"<"<<r<<">";
}

int	main(){
	char *s1 = "Toto";
	char *s2 = "Tata";
	cout << s1 <<endl;
	//f(s1,s2);
	reverse(s1);
	return 0;
}
