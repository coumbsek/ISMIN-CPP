#include <iostream>
#include <string.h>
#include <ctype.h>
#include "ex18.h"

using namespace std;

int	main(){
	long x,y;
	cin >> x;
	cin >> y;
	SHORT s1(x);
	SHORT s2(y);
	cout<<"Ini OK"<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s1*s2<<endl;
	cout<<s1+s2<<endl;
	cout<<s1/s2<<endl;
	return 0;
}
