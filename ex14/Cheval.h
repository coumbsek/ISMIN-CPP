#ifndef Cheval_h
#define Cheval_h

#include <string>
#include <cstring>

using namespace std;

class Cheval : public Animal {
	public:
		Cheval(string name):Animal(name){
			carac = "galope";
		}
		virtual void parler(){
			cout<<"hennit";
		}	
	protected:
		string carac;
};

#endif // Cheval_h
