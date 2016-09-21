#ifndef LISTE_ANIMAUX_H
#define LISTE_ANIMAUX_H

#include <string>
#include "Animal.h"

using namespace std;

class ListeAnimaux {

	public:
		ListeAnimaux(){
			len=0;
		}
		void add(Animal& a){
			liste[len]=&a;
			len++;
		}
		void disp() const{
			for(int i=0; i<len;i++){
				liste[i]->dispName();
				cout<<" <";
				liste[i]->dispCarac();
				cout<<"> <";
				liste[i]->parler();
				cout<<">";
				cout<<endl;
			}
		}
	private:
		int len;
		Animal *liste[100];

};

#endif // Chien_h
