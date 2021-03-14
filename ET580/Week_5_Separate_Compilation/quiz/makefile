# variables
CXXFLAGS := -std=c++11

# executable file to create and its dependancies
prog : driver.o quiz1.o
	g++ -std=c++11 -o prog driver.o quiz1.o

# file dependencies
driver.o : quiz1.o
	g++ -std=c++11 -c driver.cpp
quiz1.o : quiz1.h
	g++ -std=c++11 -c quiz1.cpp


# files to remove
clean:
	del driver.o quiz1.o
	del prog.exe
