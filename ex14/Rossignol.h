#ifndef Rossignol_h
#define Rossignol_h

#include <string>
#include "Oiseau.h"

using namespace std;

class Rossignol : public Oiseau {

	public:
		Rossignol(string name):Oiseau(name){

		}
		virtual void parler(){
			cout<<"chante";
		}
};

#endif // Rossignol_h
