#ifndef EX13_H
#define EX13_H
using namespace std;
typedef enum{
	Red,
	Green,
	Blue
}Color;

ostream& operator<<(ostream& flux, const Color c){
	switch (c){
		case Red :
			flux<<"Red";
			break;
		case Green :
			flux<<"Green";
			break;
		case Blue :
			flux<<"Blue";
			break;
		default :
			flux<<"Unknow color";
	}
}

#endif
