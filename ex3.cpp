#include <iostream>
#include <string.h>
using namespace std;

class Complexe {
	private :
		double re, im;
	public :
		Complexe(double re, double im){
			this->re = re; 
			this->im = im;
		}
		Complexe(double re){
			this->re  = re;
		}
		double	getRe() const{return re;} ;//const;
		double	getIm() const {return im;} ;//const;
		void	setRe(double re) {this->re = re;};
		void	setIm(double im) {this->im = im;};
		void	affiche() const{cout<<re<<" + "<<im<<"*i"<<endl;} ;//const;
		void	somme(Complexe& c) {
			this->re += c.re; 
			this->im += c.im;
		};
		Complexe operator+ (Complexe c) const { return Complexe(this->re + c.re, this->im + c.im);};
};

int	main(){
	Complexe c(1,1);
	Complexe d(2,3);
	c.affiche();
	cout << d.getRe() <<endl <<d.getIm() <<endl;
	//c.somme(d);
	c = c+d;
	c.affiche();

	return 0;
}
