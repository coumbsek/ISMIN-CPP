#include <iostream>
#include <string.h>
using namespace std;

int pgcd(int a, int b);

class Rationnal {
	private :
		int p, q; //p = num; q = denom;
	public :
		Rationnal(){
			this->p = 0;
			this->q = 1;
		}
		Rationnal(int p, int q){
			int a = pgcd(p,q);
			this->p = p/a;
			this->q = q/a;
		}
		Rationnal(int p){
			this->p = p;
			this->q = 1;
		}

		int	getP() const{return p;}
		int	getQ() const {return q;}
		void	setP(const int p) {
			this->p = p;
			int a = pgcd(p,q);
			if (a!=1){
				this->p /=a;
				this->q /=a;
			}
		}
		void	setQ(const int q) {
			this->q = q;
			int a = pgcd(p,q);
			if (a!=1){
				this->p /=a;
				this->q /=a;
			}
		}
		void	affiche() const{cout<<p<<"/"<<q;}
		
		Rationnal operator+ (const Rationnal& r) const{ 
			if (r.q == q)
				return Rationnal(p + r.p,q);
			else{
				return Rationnal(p*r.q+r.p*q, q*r.q);
			}
		};
		Rationnal operator* (const Rationnal& r) const{
			return Rationnal(p*r.p, q*r.q);
		}
		Rationnal operator* (const int a) const{
			return Rationnal(this->p*a,this->q);
		}
		Rationnal operator- (const Rationnal& r) const{
			return *this + r*(-1);
		}
		Rationnal operator/ (const Rationnal& r) const{
			return *this * Rationnal(r.q,r.p);
		}
		bool operator== (const Rationnal& r) const{
			return (r.p == p && r.q == q) ? true : false;
		}
		bool operator!= (const Rationnal& r) const{
			return !(*this==r);
		}
		void operator= (const Rationnal& r){
			this->p = r.p;
			this->q = r.q;
		}
		void operator+= (const Rationnal& r){
			*this = *this + r;
		}
		void operator-= (const Rationnal& r){
			*this = *this - r;
		}
		void operator*= (const Rationnal& r){
			*this = *this *r;
		}
		void operator/= (const Rationnal& r){
			*this = *this *r;
		}
		friend ostream& operator<< (ostream& flux, Rationnal& r);
		operator float() const { return (float)p/(float)q;}		
};

ostream& operator<< (ostream& flux, Rationnal& r){
		if (r.q==1)
			flux<<r.p;
		else
			r.affiche();
}

int	pgcd(int a, int b){
	if (a<b){
		int c = a;
		a = b;
		b = c;
	}
	if (a%b == 0)
		return b;
	else
		return pgcd(b, a%b);
}	

int	main(){
	Rationnal c(1,12);
	Rationnal d(3,4);
	cout<<c<<endl;
	cout<<d<<endl;
	c = c/d;
	cout<<c<<endl;
	return 0;
}
