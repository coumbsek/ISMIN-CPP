#include <iostream>
#include <cstring>
#include <string>

class Vehicule {
	protected :
		string	name;
		int	fisPow;
		int	nbWheel;
		Color	color;

	public :
		Vehicule(const string s, const int pow, const int n, const Color c){
			name = s;
			fisPow = pow;
			nbWheel = n;
			color = c;
		}
		friend ostream& operator<< (ostream& flux, const Vehicule& v);
		void affiche() const{
			cout<<*this;
		}
		/*
		void operator/= (const Rationnal& r){
			*this = *this *r;
		}*/
		//operator float() const { return (float)p/(float)q;}		
};

ostream& operator<< (ostream& flux, const Vehicule& v){
		flux<<v.name<<endl;
		flux<<"Puissance Fiscale : "<<v.fisPow<<endl;
		flux<<"Nombre de roues : "<<v.nbWheel<<endl;
		flux<<"Couleur : "<<v.color<<endl;
}//*/
