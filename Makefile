#str.o : str.h str.cpp
#	g++ -c str.cpp
ex9.o : str.h ex9.cpp
	g++ -c ex9.cpp
#ex9 : str.o ex9.o
ex9 : ex9.o 
	g++ -o ex9 ex9.0 #g++ -o ex9 str.o ex9.o

ex13.o : ex13Vehicule.h ex13Moto.h ex13.h ex13.cpp
	g++ -c ex13.cpp
ex13 : ex13.o
	g++ -o ex13 ex13.o

ex14.o : ex14/*.h ex14/ex14.cpp
	g++ -c ex14/ex14.cpp

ex14 : ex14.o
	g++ -o exo14 ex14.o

ex15.o : ex15/*.h ex15/ex15.cpp
	g++ -c ex15/ex15.cpp

ex15 : ex15.o
	g++ -o exo15 ex15.o
