#include <iostream>
#include <cstring>
#include <string>
#include <limits.h>

using namespace std;

class SHORT{
	private:
		short val;
	public:
		SHORT(long v){
			try{
				if(v<SHRT_MAX && v>SHRT_MIN){
					val = v;	
				}
				else if (v>SHRT_MAX){
					throw overflow_error("Overflow, your value is to hight for a short type");
				}
				else if (v<SHRT_MIN){
					throw underflow_error("Underflow, your value is to low for a short type");
				}
			}
			catch(exception const& e){
				cerr << "Error : " << e.what() <<endl;
			}
		}
		friend ostream& operator<<(ostream& flux, const SHORT &s);
		SHORT operator+(const SHORT s){
			return SHORT(this->val+s.val);
		}
		SHORT operator-(const SHORT s){
			return SHORT(this->val-s.val);
		}
		SHORT operator*(const SHORT s){
			return SHORT(this->val*s.val);
		}
		SHORT operator/(const SHORT s){
			try{
				if(s.val!=0)
					return SHORT(this->val/s.val);
				else
					throw domain_error("Division by zero");
		
			}
			catch(exception const& e){
				cerr << "Error : " << e.what() <<endl;
				return SHORT(this->val);
			}
		}
};

ostream& operator<<(ostream& flux, const SHORT &s){
	flux<<s.val;
}
