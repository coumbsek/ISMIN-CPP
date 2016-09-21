#ifndef Oiseau_h
#define Oiseau_h

#include <string>
#include "Animal.h"

using namespace std;

class Oiseau : public Animal {

	public:
		Oiseau(string name):Animal(name){
			carac = "vole";
		}
		virtual void parler(){
			cout<<"vole";
		}
};

#endif // Oiseau_h
