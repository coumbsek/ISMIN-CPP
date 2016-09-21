#include "ex15VehiculeMarin.h"
#include "ex15VehiculeTerrestre.h"
#include "ex15VehiculeAmphibie.h"

using namespace std;

int main(int argc, char* argv[]){
	VehiculeTerrestre t(123,4);
	t.disp();
	VehiculeMarin m(456,1.60);
	m.disp();
	VehiculeAmphibie a(000,3,111,0.9);
	a.disp();
	return 0;
}
