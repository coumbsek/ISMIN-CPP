// e19.cpp

#include <iostream>
using namespace std;

const int TAILLE = 100;
template <typename T>
class Ensemble
{
	public :
		Ensemble (){
		nb = 0;	    
		};
		void add(T val){
		    if (nb < TAILLE && !contain(val))
		    {
			elem[nb] = val;
			nb++;
		    }
		}

		bool contain(T val) const{
			int i = 0;

			while (val != elem[i] && i < nb)
				i++;

			if (i < nb)
				return true;
			else
				return false;
		}
		void disp() const{
			for (int i = 0; i < nb; i++)
				cout << elem[i] << " ";
			cout << endl;
		}

	private :
		T elem[TAILLE];
		int nb;
};

int main ()
{
	Ensemble<int> i;
	i.add(1);
	i.add(5);
	i.disp();

	Ensemble<string> s;
	s.add("toto");
	s.add("echo");
	s.disp();
	return 0;
}
