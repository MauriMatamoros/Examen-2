racionales:	racionales.o main.o
	g++ racionales.o main.o -o racionales

main.o:	main.cpp racionales.h
	g++ -c main.cpp

racionales.o:	racionales.cpp racionales.h
	g++ -c racionales.cpp

clean:
	rm *.o racionales