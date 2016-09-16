#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;


class Point{
	private:
		float x, y;
	public:
		Point(float x, float y){
			this->x = x;
			this->y = y;
		}
		Point(){
			this->x=0;
			this->y=0;
		}
		float getX() const{
			return x;
		}
		float getY() const{
			return y;
		}
		void setX(float x){
			this->x=x;
		}
		void setY(float y){
			this->y=y;
		}
		void disp() const{
			cout<<getX()<<","<<getY()<<endl;
		}
		Point operator+ (Point p) const { return Point(this->x + p.x, this->y+ p.y);};
		void operator= (Point p) {this->x=p.x; this->y=p.y;};
};

class Segment{
	private:
		Point ori;
		Point ext;
	public:
		Segment(){
			ori = Point();
			ext = Point();
		}
		Segment(const Point O , const Point E){
			ori = Point(O.getX(), O.getY());
			ext = Point(E.getX(), E.getY());;
		}//*/
		Segment(const float x1, const float y1, const float x2, const float y2){
			ori=Point(x1,y1);
			ext=Point(x2,y2);
		}
		void translate(const Point p){
			ori = ori + p;
			ext = ext + p;
		}
		void disp() const{
			ori.disp();
			ext.disp();
		}
};//*/

//	Complexe operator+ (Complexe c) const { return Complexe(this->re + c.re, this->im + c.im);};


int	main(){
	Point p1(2,2);
	Point p2(4,3);
	Point p3(1,2);
	cout<<"P1"<<endl;
	p1.disp();
	cout<<"P2"<<endl;
	p2.disp();
	cout<<"P3"<<endl;
	p3.disp();
	Segment s(p1,p2);
	s.disp();
	cout<<"Trans"<<endl;
	s.translate(p3);
	s.disp();/*
	p1=p2;
	p1.disp();
	p2.disp();*/
	return 0;
}
