#include <iostream>
#include <string.h>
#include <ctype.h>
#include "str.h"
using namespace std;


class Compte{
	private:
		String name;
		float amount;
		static float t;
		Compte *suiv;
		static Compte *tete;
	public:
		Compte(const String n, const float amount)
			:name(n){
			this->suiv = Compte::tete;
			Compte::tete = this;
			//this->name = name;
			this->amount = amount;
		}
		Compte(const char* n, const float amount)
			:name(n){
			this->suiv = Compte::tete;
			Compte::tete = this;
			//this->name = String(name);
			this->amount = amount;
		}
		~Compte(){
			Compte* c = Compte::tete;
			if (c == this)
				Compte::tete=this->suiv;
			if (c->suiv == this)
				c->suiv = this->suiv;
			while (c->suiv->suiv!=NULL){
				if (c->suiv == this){
					c->suiv = this->suiv;
					break;
				}
				c = c->suiv;
			}
			if (c->suiv == this)
				c->suiv = NULL;

		}
		static void setT(const float t){
			if (t<=1 && t>=0)
				Compte::t;
		}
		static void dispAll(){
			Compte* c = Compte::tete;
			while (c->suiv!=NULL){
				c->disp();
				c = c->suiv;
			}
			c->disp();
		}
		static void actualizeAll(){
			Compte* c = Compte::tete;
			while (c->suiv!=NULL){
				c->actualize();
				c = c->suiv;
			}
			c->actualize();	
		}
		void from(Compte& c, const float a){
			this->amount += a;
			c.amount -=a;
		}
		void actualize(){
			amount += amount*(Compte::t);
		}
		void disp(){
			cout<<"Compte : ";
			name.disp();
			cout<<" Montant : "<<amount<<endl;
		}
		//Point operator+ (Point p) const { return Point(this->x + p.x, this->y+ p.y);};
		//void operator= (Point p) {this->x=p.x; this->y=p.y;};
};

float Compte::t = 0.5;
Compte* Compte::tete = NULL;
//	Complexe operator+ (Complexe c) const { return Complexe(this->re + c.re, this->im + c.im);};
	
int	main(){
	//Compte::setT(0.5);
	Compte* c1 = new Compte("Toto",10);
	Compte* c2 = new Compte("Tata",20);
	Compte* c3 = new Compte("Titi",15);
	c1->disp();
	c2->disp();
	c1->from(*c2,10);
	c1->disp();
	c2->disp();
	c1->actualize();
	c1->disp();
	cout<<"DispAll"<<endl;
	Compte::dispAll();
	Compte::actualizeAll();
	cout<<"DispAll"<<endl;
	Compte::dispAll();
	delete c3;
	cout<<"DispAll"<<endl;
	Compte::dispAll();
}
