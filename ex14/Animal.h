#ifndef Animal_h
#define Animal_h

#include <cstring>
#include <string>
#include <iostream>

using namespace std;

class Animal {
	public:
		Animal(){
			this->name="";
		}
		Animal(string name){
			this->name = name;
		}
		virtual void dispName(){
			cout<<name;
		}
		virtual void dispCarac(){
			cout<<carac;
		}
		void parler(){}
		void setName(string name){
			this->name = name;
		}
	protected:
		string name;
		string carac;
};

#endif // Animal_h
