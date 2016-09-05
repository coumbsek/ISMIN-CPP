#include <iostream>
using namespace std;

struct Date{
	int jour;
	int mois;
	int annee;
};

const int ANNEE_DE_BASE = 1;

void iniDate(Date& d, int jour, int mois, int annee=ANNEE_DE_BASE){
	d.jour = jour;
	d.mois = mois;
	d.annee = annee;
}

void dispDate(Date& d){
	cout << d.jour << "/"<<d.mois<<"/"<<d.annee<<endl;
}

int  compDate(Date& d1, Date &d2){
	int r = 0;
	if (d1.mois == d2.mois &&
		d1.jour == d2.jour &&
		d1.annee == d2.annee)
		r= 0;
	else if (d1.annee < d2.annee)
		r= 1;
	else if (d1.annee > d2.annee)
		r= -1;
	else if (d1.mois < d2.mois)
		r= 1;
	else if (d1.mois > d2.mois)
		r= -1;
	else if (d1.jour < d2.jour)
		r= 1;
	else
		r= -1;
	return r;
	//cout<<endl<<r<<endl;
}

char compDate(Date& d1, int jour, int mois, int annee){
	Date d;
	iniDate(d,jour, mois, annee);
	dispDate(d);
	return compDate(d1,d);
}

int	main(){
	cout << "Hello World !\n";
	Date date;
	iniDate(date, 2,3);
	dispDate(date);
	int r = compDate(date,2,3,2);
	cout<<"d2-d1 = "<<r<<endl;
	return 0;
}
