// (c) s. trowbridge 2021
#include <iostream>
#include <iomanip>

#include "Flight.h"

// containers
MyArray<Airline*> airlines;
MyArray<Airport*> airports;
MyArray<Passenger*> passengers;
MyArray<Pilot*> pilots;
MyArray<Flight*> flights;

// store data into containers
void read() {
    airlines.push_back( new Airline("Rebellion Air") );
    airlines.push_back( new Airline("Empire Air") );
    airlines.push_back( new Airline("Jawa Air") );
    airports.push_back( new Airport("DAN", "Dantooine") );
    airports.push_back( new Airport("END", "Endor") );
    airports.push_back( new Airport("HOT", "Hoth") );
    airports.push_back( new Airport("KES", "Kessel") );
    pilots.push_back( new Pilot("Darth Sidious") );
    pilots.push_back( new Pilot("Darth Plagueis") );
    pilots.push_back( new Pilot("Darth Bane") );
    passengers.push_back( new Passenger("Boba Fett") );
    passengers.push_back( new Passenger("Zam Wesell") );
    passengers.push_back( new Passenger("Qui-Gon Jinn") );
    passengers.push_back( new Passenger("Mace Windu") );
    passengers.push_back( new Passenger("Kit Fisto") );
    passengers.push_back( new Passenger("Barriss Offee") );
    passengers.push_back( new Passenger("Eeth Koth") );
    passengers.push_back( new Passenger("Count Dooku") );
    passengers.push_back( new Passenger("Aayla Secura") );
    flights.push_back( new Flight(111, *airlines[0], *airports[0], *airports[1], *pilots[0]) );
    flights.push_back( new Flight(222, *airlines[1], *airports[2], *airports[3], *pilots[0]) );
    flights.push_back( new Flight(333, *airlines[2], *airports[2], *airports[0], *pilots[0]) );
    flights[0]->addPassenger(*passengers[0]);
    flights[0]->addPassenger(*passengers[1]);
    flights[0]->addPassenger(*passengers[3]);
    flights[0]->addPassenger(*passengers[6]);
    flights[0]->addPassenger(*passengers[7]);
    flights[0]->addPassenger(*passengers[2]);
    flights[1]->addPassenger(*passengers[1]);
    flights[1]->addPassenger(*passengers[3]);
    flights[1]->addPassenger(*passengers[4]);
    flights[1]->addPassenger(*passengers[5]);
    flights[1]->addPassenger(*passengers[7]);
    flights[1]->addPassenger(*passengers[2]);
    flights[1]->addPassenger(*passengers[0]);
}

int main() {
    std::cout << "\n";

    // read data into the containers
    read();

    std::cout << "\n";
    return 0;
}
