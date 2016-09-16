#include <iostream>
#include <string.h>
#include <ctype.h>
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
		String(int len){
			this->len = len;
			ch = new char[len];
		}
		String(){
			len=0;
			ch=NULL;
		}
		~String(){
			if (ch != NULL)
			delete [] ch;
		}
		void disp() const{
			if (ch != NULL)
				cout<<ch;
		}
		void up(){
			if(ch != NULL){
			       for(int i = 0; i<len; i++)
				       ch[i]=toupper(ch[i]);
			}
		}
		bool isEqual (const String& s) const{
			return (strcmp(ch,s.ch)==0) ? true : false;
		}
		int getLen() const{
			return len;
		}

		void operator+= (const String& s){
			int l = s.len+this->len-1;
			char *str = new char[l];
			for(int i = 0; i<len; i++){
				str[i]=ch[i];	
			}
			strcat(str,s.ch);
			delete [] this->ch;
			this->ch = str;
			this->len = l;
		};

		String operator+ (const String& s) const{
			String str = *this;
			str += s;
			return str;
		}
		void operator= (const String& s) {
			delete [] this->ch;
			this->len = s.getLen();
			this->ch = new char[len];
			strcpy(this->ch,s.ch);
		};
		bool operator== (const String& s) const{return (strcmp(this->ch,s.ch)==0) ? true : false;};
		bool operator!= (const String& s) const{return !(*this==s);};
		friend ostream& operator<<(ostream& flux, String& s);
	private:
		char *ch;
		int len;
};

ostream& operator<<(ostream& flux, String& s){
	s.disp();
}

int	main(){
	cout<<"ini"<<endl;
	String s("Toto");
	String s2(s);
	cout<<s.isEqual(s2)<<endl;
	s2.up();
	cout<<s.isEqual(s2)<<endl;
	cout<<"Fin"<<endl;
	cout<<s<<endl<<s2<<endl;
	s=s2;
	cout<<"Copy"<<endl;
	cout<<"s "<<s<<endl;
	cout<<"s2 "<<s2<<endl;
	String s3;
	s3 = s + s2;
	cout<<s3<<endl;
	return 0;
}
