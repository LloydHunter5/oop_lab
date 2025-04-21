
program: developed_lot.o lot.o
	g++ -o main main.cpp developed_lot.o lot.o

lot.o: lot.cpp lot.hpp
	g++ -c lot.cpp lot.hpp

developed_lot.o: developed_lot.cpp developed_lot.hpp
	g++ -c developed_lot.cpp developed_lot.hpp

clean:
	rm lot.o lot.hpp.gch developed_lot.o developed_lot.hpp.gch main