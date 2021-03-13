# variables
CXXFLAGS := -std=c++11

# executable file to create and its dependancies
prog : driver.o RatNum.o
	g++ -std=c++11 -o prog driver.o RatNum.o

# file dependencies
driver.o : RatNum.h
	g++ -std=c++11 -c driver.cpp
RatNum.o : RatNum.h
	g++ -std=c++11 -c RatNum.cpp


# files to remove
clean:
	del driver.o RatNum.o
	del prog.exe
