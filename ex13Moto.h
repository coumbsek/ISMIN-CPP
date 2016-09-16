#include <iostream>
#include <cstring>
#include <string>

class Moto : public Vehicule{
	private:
		int cyli;
	public:
		Moto(const string s, const int pow, const Color c, const int cyl):Vehicule(s,pow,2,c){
			cyli = cyl;
		}
		friend ostream& operator<<(ostream& flux, const Moto& m);
		virtual void affiche() const{
			cout<<*this;	
		}
};

ostream& operator<< (ostream& flux, const Moto& m){
	flux<<m.name<<endl;
	flux<<"Puissance Fiscale : "<<m.fisPow<<endl;
	flux<<"Nombre de roues : "<<m.nbWheel<<endl;
	flux<<"Cylindree : "<<m.cyli<<" cm3"<<endl;
	flux<<"Couleur : "<<m.color<<endl;
}
