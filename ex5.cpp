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

int	main(){
	cout<<"ini"<<endl;
	String s("Toto");
	String s2(s);
	cout<<s.isEqual(s2);
	s2.up();
	cout<<s.isEqual(s2);
	cout<<endl<<"Fin"<<endl;
	return 0;
}
