#ifndef Corbeau_h
#define Corbeau_h

#include <string>
#include "Oiseau.h"

using namespace std;

class Corbeau : public Oiseau {

	public:
		Corbeau(string name):Oiseau(name){
		}
		virtual void parler(){
			cout<<"croasse";
		}
};

#endif // Corbeau_h
