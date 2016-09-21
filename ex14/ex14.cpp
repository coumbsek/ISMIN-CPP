#include <iostream>
#include <string>
#include <cstring>
#include "ex14.h"
#include "Animal.h"
#include "Cheval.h"
#include "Chien.h"
#include "Corbeau.h"
#include "Rossignol.h"
#include "Pigeon.h"
#include "ListeAnimaux.h"

using namespace std;

int	main(){
	Chien	chien("Medor");/*
	Cheval	cheval("Crin Blanc");
	Pigeon	pigeon("Petit pigeon");
	Corbeau	corbeau("Petit corbeau");
	Rossignol rossignol("Petit rossignol");*/
	ListeAnimaux l;
	l.add(chien);/*
	l.add(cheval);
	l.add(pigeon);
	l.add(corbeau);
	l.add(rossignol);*/
	l.disp();
}
