# variables
CXXFLAGS := -std=c++11

# executable file to create and its dependancies
prog : driver.o Person.o Job.o
	g++ -std=c++11 -o prog driver.o Person.o Job.o

# file dependencies
driver.o : Person.h Job.h
	g++ -std=c++11 -c driver.cpp
Person.o : Person.h Job.h
	g++ -std=c++11 -c Person.cpp
Job.o : Job.h
	g++ -std=c++11 -c Job.cpp

# files to remove
clean:
	del driver.o Person.o Job.o
	del prog.exe
