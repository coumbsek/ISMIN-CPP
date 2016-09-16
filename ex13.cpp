#include <iostream>
#include <cstring>
#include <string>
#include "ex13.h"
#include "ex13Vehicule.h"
#include "ex13Moto.h"

int	main(){
	Color c = Blue;
	Vehicule v("Vehicule",1,4,c);
	cout<<v;
	Moto m("Moto",1,c,50);
	cout<<m;	
	return 0;
}
