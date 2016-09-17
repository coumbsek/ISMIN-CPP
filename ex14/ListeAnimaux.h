#ifndef LISTE_ANIMAUX_H
#define LISTE_ANIMAUX_H

#include <string>
#include "Animal.h"

using namespace std;

class ListeAnimaux {

	public:
		ListeAnimaux(){
			len=0;
			liste=NULL;	
		}
		void add(const Animal& a){
			Animal *tmp = new Animal[len];
			for (int i=0; i<len;i++){
				tmp[i]=liste[i];
			}
			delete [] liste;
			liste = new Animal[len+1];
			int i;
			for ( i=0; i<len;i++){
				liste[i]=tmp[i];
			}
			liste[i]=a;
			len++;
		}
		void disp() const{
			for(int i=0; i<len;i++){
				liste[i].dispName();
				cout<<" <";
				liste[i].dispCarac();
				cout<<"> <";
				liste[i].parler();
				cout<<">";
				cout<<endl;
			}
		}
	private:
		int len;
		Animal *liste;
};

#endif // Chien_h
