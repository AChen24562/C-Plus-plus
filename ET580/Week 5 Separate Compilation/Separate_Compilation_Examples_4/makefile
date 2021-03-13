# define variables
CXXFLAGS := -std=c++11
OBJS := driver.o Person.o \
       Job.o

# file to create with dependencies
prog.exe : $(OBJS)
	g++ $(CXXFLAGS) -o prog $(OBJS)

# file dependencies
driver.o : Person.h Job.h
	g++ $(CXXFLAGS) -c driver.cpp
Person.o : Person.h Job.h
	g++ $(CXXFLAGS) -c Person.cpp
Job.o : Job.h
	g++ $(CXXFLAGS) -c Job.cpp

# files to remove
clean:
	del $(OBJS)
	del prog.exe
