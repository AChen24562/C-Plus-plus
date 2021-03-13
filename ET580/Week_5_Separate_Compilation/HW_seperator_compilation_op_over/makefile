# variables
CXXFLAGS := -std=c++11

# executable file to create and its dependancies
prog2 : driver2.o RatNum2.o
	g++ -std=c++11 -o prog2 driver2.o RatNum2.o

# file dependencies
driver.o : RatNum2.h
	g++ -std=c++11 -c driver2.cpp
RatNum.o : RatNum2.h
	g++ -std=c++11 -c RatNum2.cpp


# files to remove Windows
#clean:
#	del driver2.o RatNum2.o
#	del prog2.exe

# Or Mac
clean:
	rm driver2.o RatNum2.o
	rm prog2
