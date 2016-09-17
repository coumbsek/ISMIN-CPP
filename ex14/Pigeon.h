#ifndef Pigeon_h
#define Pigeon_h

#include <string>
#include "Oiseau.h"

using namespace std;

class Pigeon : public Oiseau {

	public:
		Pigeon(string name):Oiseau(name){

		}
		
		virtual void parler(){
			cout<<"roucoule";
		}
};

#endif // Pigeon_h
