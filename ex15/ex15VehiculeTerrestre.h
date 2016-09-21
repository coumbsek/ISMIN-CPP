#include "ex15Vehicule.h"

using namespace std;

class VehiculeTerrestre : public Vehicule {
	public:
		VehiculeTerrestre(int serial, int nbWheel) : Vehicule(serial){
			this->nbWheel = nbWheel;
		}
		void disp(){
			cout<<"Vehicule Terrestre n°"<<serial<<endl;
			cout<<"\t nbWheel "<<nbWheel<<endl;
		}
	protected:
		int nbWheel;

};
