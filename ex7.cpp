#include <iostream>
#include <string.h>
using namespace std;

class Ensemble {
	private :
		int card;
		int *s;

		void extend(){
			int *r = new int[card];
			for (int i = 0; i<card; i++){
				r[i] = s[i];
			}
			delete [] s;
			s = new int [card+1];
			for (int i = 0; i< card+1; i++){
				s[i] = r[i];
			}
			delete [] r;
			card ++;
		}
		
		void reduce(){
			if (card==0)
				return;
			int *r = new int[card-1];
			for (int i = 0; i<card-1; i++){
				r[i] = s[i];
			}
			delete [] s;
			s = new int [card-1];
			for (int i = 0; i< card-1; i++){
				s[i] = r[i];
			}
			delete [] r;
			card --;
		}
	public :
		Ensemble() {
			card = 0;
			s = new int[0];
		}
		Ensemble(const Ensemble& e){
			card=e.card;
			s = new int[card];
			cpy(e);
		}
		void ini(){
			card = 0;
			delete []s;
			s = new int[0];
		}

		bool isIn(int i) const{
			for (int j = 0; j<card; j++){
				if (s[j]==i)
					return true;
			}
			return false;
		}

		void add(int i){
			if (!isIn(i)){
				extend();
				s[card-1] = i;
			}
		}

		void remove(int i){
			if (isIn(i)){
				int k = s[card-1];
				reduce();
				for (int j = 0; j<card; j++){
					if (s[j]==i){
						s[j] = k;
						return;
					}
				}	

			}
		}

		void affiche () const{
			cout <<"#S = "<<card<<endl;
			cout <<"S = {";
			for(int i = 0; i<card;i++){
				cout << s[i];
				if (i!=card-1)	
					cout <<", ";
			}
			cout << "}"<<endl;
		}
		
		void cpy(const Ensemble& e){
			this->ini();
			for (int i=0; i<e.card;i++){
				this->add(e.get(i));
			}
		}
		int get(const int i) const{
			return s[i];
		}	
		bool operator== (const Ensemble e) const{ 
			if (e.card != this->card)
				return false;
			for (int i =0 ; i<card; i++){
				if (e.isIn(s[i])==false)
					return false;
			}
			return true;
		};

		void operator= (const Ensemble& e){
			cpy(e);
		};
};

int	main(){
	Ensemble e;
	cout<<e.isIn(1)<<endl;
	e.affiche();
	e.add(1);
	e.add(5);
	e.add(3);
	e.add(3);
	//e.affiche();
	e.remove(5);
	cout << "E:"<<endl;
	e.affiche();
	Ensemble a;
	a.add(3);
	a.add(5);
	a.add(1);
	cout << "A:"<<endl;
	a.affiche();
	cout<< "A==E ? "<<(e==a)<<endl;
	e=a;//e.cpy(a);
	e.affiche();
	Ensemble f(e);
	f.affiche();
	return 0;
}
