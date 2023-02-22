simulator: driver.o operator.o addOp.o operators.o
	g++ -o simulator driver.o operator.o addOp.o operators.o

driver.o: driver.cpp 
	g++ -c driver.cpp

operators.o: operators.cpp
	g++ -c operators.cpp

addOp.o: addOp.cpp
	g++ -c addOp.cpp

operator.o: operator.h operator.cpp
	g++ -c operator.cpp

clean: 
	rm *.o simulator