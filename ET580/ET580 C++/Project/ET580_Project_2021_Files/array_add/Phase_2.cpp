// (c) s. trowbridge 2021
#include <iostream>

#include "Flight.h"

int main() {
    std::cout << "\n";

    std::cout << "PHASE 2 TEST *******************************************\n\n";

    std::cout << "CONSTRUCTOR/ACCESSORS TEST\n\n";
    /* construct airlines */
    Airline *reb = new Airline("Rebellion Air");
    std::cout << "Airline: " << reb->getName() << "\n";

    /* construct airports */
    Airport *ap1 = new Airport("DAN", "Dantooine");
    Airport *ap2 = new Airport("END", "Endor");
    std::cout << "Airport: " << ap1->getName() << "\n"; // ap were a

    /* construct pilots */
    Pilot *p1 = new Pilot("Darth Sidious");
    std::cout << "Pilot: " << p1->getName() << "\n";

    /* construct passenger */
    Passenger *pas1 = new Passenger("Boba Fett");
    std::cout << "Passenger: " << pas1->getName() << "\n";

    /* construct flights */
    Flight *f1 = new Flight(111, *reb, *ap1, *ap2, *p1);// ap were a

    /* << operator overloads */
    std::cout << "\n\nOPERATOR << OVERLOADS TEST\n\n";
    std::cout << *f1 << "\n";
    std::cout << *ap1 << "\n";
    std::cout << *p1 << "\n";
    std::cout << *pas1 << "\n";

    std::cout << "PHASE 2 COMPLETED **************************************\n\n";
    /* end of phase 4 */

    std::cout << "\n";
    return 0;
}
