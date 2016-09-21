#ifndef Chien_h
#define Chien_h

#include <string>
#include <string.h>
#include "Animal.h"

using namespace std;

class Chien : public Animal {

	public:
		Chien(string name) : Animal(name){
			carac = "reste fidèle";
		}	
		void parler(){
			cout<<"aboie";
		}

	private:
		string carac;
};

#endif // Chien_h
