#ifndef VEHICULE_H
#define VEHICULE_H
#include <iostream>

using namespace std;

class Vehicule {
	public:
		Vehicule(int serial){
			this->serial = serial;
		}
		virtual void disp(){
			cout<<"Vehicule n°"<<serial<<endl;	
		};
	protected:
		int serial;
};
#endif
