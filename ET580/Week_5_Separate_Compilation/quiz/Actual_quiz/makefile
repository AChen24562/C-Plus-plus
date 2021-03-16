# variables
CXXFLAGS := -std=c++11

# executable file to create and its dependancies
prog : driver.o quiz.o
	g++ -std=c++11 -o prog driver.o quiz.o

# file dependencies
driver.o : quiz.o
	g++ -std=c++11 -c driver.cpp
quiz.o : quiz.h
	g++ -std=c++11 -c quiz.cpp


# files to remove
clean:
	del driver.o quiz.o
	del prog.exe
