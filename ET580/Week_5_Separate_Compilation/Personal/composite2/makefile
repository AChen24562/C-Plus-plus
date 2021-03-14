# variables
CXXFLAGS := -std=c++11

# executable file to create and its dependancies
prog : driver.o Student.o Grade.o
	g++ -std=c++11 -o prog driver.o Student.o Grade.o

# file dependencies
driver.o : Student.h Grade.h
	g++ -std=c++11 -c driver.cpp
Student.o : Student.h Grade.h
	g++ -std=c++11 -c Student.cpp
Grade.o : Grade.h
	g++ -std=c++11 -c Grade.cpp

# files to remove
clean:
	del driver.o Student.o Job.o
	del prog.exe
