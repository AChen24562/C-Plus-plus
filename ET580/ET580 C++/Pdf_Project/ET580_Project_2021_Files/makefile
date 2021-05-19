# variables
CXXFLAGS := -std=c++11

# executable file to create and its dependancies
prog.exe : Phase_3.o Passenger.o Pilot.o Airline.o Airport.o Flight.o
	g++ -std=c++11 -o prog Phase_3.o Passenger.o Pilot.o Airline.o Flight.o Airport.o

# file dependencies
Phase_3.o : Passenger.h Airline.h MyArray.h
	g++ -std=c++11 -c Phase_3.cpp
Airline.o : Airline.h
	g++ -std=c++11 -c Airline.cpp
Airport.o : Airport.h
	g++ -std=c++11 -c Airport.cpp
Passenger.o : Passenger.h Airline.h
	g++ -std=c++11 -c Passenger.cpp
Pilot.o : Pilot.h Airline.h
	g++ -std=c++11 -c Pilot.cpp
Flight.o : Flight.h Passenger.h Pilot.h Airline.h
	g++ -std=c++11 -c Flight.cpp

# files to remove
clean:
	del Phase_*.o Passenger.o Airline.o Pilot.o Flight.o Airport.o
	del prog.exe
