#str.o : str.h str.cpp
#	g++ -c str.cpp
ex9.o : str.h ex9.cpp
	g++ -c ex9.cpp
#ex9 : str.o ex9.o
ex9 : ex9.o 
	g++ -o ex9 ex9.0 #g++ -o ex9 str.o ex9.o
