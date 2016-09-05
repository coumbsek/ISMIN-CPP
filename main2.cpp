#include <iostream>
using namespace std;

struct Date{
	int jour;
	int annee;
};

const int ANNEE_DE_BASE = 1;

void iniDate(Date& d, int jour, int mois, int annee=ANNEE_DE_BASE){
	d.jour = jour+31*(mois-1);
	d.annee = annee;
}

void dispDate(Date& d){
	cout << d.jour%31 << "/"<<d.jour/31+1<<"/"<<d.annee<<endl;
}

int  compDate(Date& d1, Date &d2){
	int r = 5;
	if (d1.jour/31 == d2.jour/31 &&
		d1.jour%31 == d2.jour%31 &&
		d1.annee == d2.annee)
		r= 0;
	else if (d1.annee < d2.annee)
		r= 1;
	else if (d1.annee > d2.annee)
		r= -1;
	else if (d1.jour < d2.jour)
		r = 1;
	else if (d1.jour > d2.jour)
		r = -1;
	else
		r = 6;
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
	int r = compDate(date,2,3,0);
	cout<<"d2-d1 = "<<r<<endl;
	return 0;
}
