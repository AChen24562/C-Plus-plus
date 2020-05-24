// (c) S. Trowbridge
// Ex 1c - variables names

#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* Variables:
     * - Must begin with a letter or underscore.
     * - After the first character can contain letters, numbers or underscores
     * - Case sensitive
     * - Cannot be a reserved word (such as cout or cin)
     */

    // Legal Names
    int n; // a legal name, but ideally should be more descriptive
    int number_of_days; // underscores within a variable name are legal
    int _number_of_days; // can start with an underscore
    int number_of_days2; // can contain a number after the first character

    // Illegal Names
    // int number of days; // spaces not allowed, compiler error
    // int 1test; // must start with a letter or underscore, compiler error

    // c++ is case sensitive, thus variables are case sensitive
    int Number_Of_Days; // different variable from number_of_days

    return 0;
}
