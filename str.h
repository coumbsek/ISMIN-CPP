#include <iostream>
#include <string.h>
#include <ctype.h>
#ifndef STR_H
	#define STR_H
using namespace std;

class String{
	public:
		String(const char *s){
			len=strlen(s);
			ch = new char[len];
			for (int j=0; j<len;j++){
				ch[j]=s[j];
			}
		}
		String(const String& s){
			len = s.getLen();
			ch = new char[len];
			strcpy(ch,s.ch);
		}
		String(){
			len=0;
			ch=NULL;
		}
		~String(){
			if (ch != NULL)
			delete [] ch;
		}
		void disp(){
			if (ch != NULL)
				cout<<ch;
		}
		void up(){
			if(ch != NULL){
			       for(int i = 0; i<len; i++)
				       ch[i]=toupper(ch[i]);
			}
		}
		bool isEqual(const String& s) const{
			return (strcmp(ch,s.ch)==0) ? true : false;
		}
		int getLen() const{
			return len;
		}
	private:
		char *ch;
		int len;
};
#endif
