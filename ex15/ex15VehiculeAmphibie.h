#include "ex15Vehicule.h"

using namespace std;

class VehiculeAmphibie : public VehiculeTerrestre, public VehiculeMarin {
	public:
		VehiculeAmphibie(int serial1, int nbWheel, int serial2, float lvWater) : VehiculeTerrestre(serial1, nbWheel), VehiculeMarin(serial2, lvWater){
			this->nbWheel = nbWheel;
		}
		void disp(){
			cout<<"VehiculeAmphibie : "<<endl;
			cout<<"\t";
			VehiculeTerrestre::disp();
			cout<<"\t";
			VehiculeMarin::disp();
		}
};
