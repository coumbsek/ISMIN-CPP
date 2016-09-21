#include "ex15Vehicule.h"

using namespace std;

class VehiculeMarin : public Vehicule {
	public:
		VehiculeMarin(int serial, float lvWater) : Vehicule(serial){
			this->lvWater = lvWater;
		}
		void disp(){
			cout<<"Vehicule Marin n°"<<serial<<endl;
			cout<<"\t tirant d'eau "<<lvWater<<endl;
		}
		void abstract(){};
	protected:
		float lvWater;

};
