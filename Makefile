all: makeFile

makeFile: calculator.o
	     g++ calculator.o -o makeFile

calculator.o: calculator.cpp
	     g++ -c calculator.cpp
	
clean:
	rm -rf *o makeFile	
