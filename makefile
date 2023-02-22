simulator: driver.o operator.o
	g++ -o simulator driver.o operator.o

driver.o: driver.cpp
	g++ -c driver.cpp

operator.o: operator.h operator.cpp
	g++ -c operator.cpp

clean: 
	rm *.o simulator